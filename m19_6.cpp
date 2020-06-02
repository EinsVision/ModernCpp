#include "projects.h"

mutex mtx196;

void dotProductNative(const vector<int>& v0, const vector<int>& v1,
    const unsigned int i_start, const unsigned int i_end,
    unsigned long long& sum)
{
    for (unsigned int i = i_start; i < i_end; i++)
    {
        sum += v0[i] * v1[i];
    }
}

void dotProductLock(const vector<int>& v0, const vector<int>& v1,
    const unsigned int i_start, const unsigned int i_end,
    unsigned long long& sum)
{
    // std::cout << "Thread start" << std::endl;
    for (unsigned int i = i_start; i < i_end; i++)
    {
        scoped_lock lock(mtx196);
        sum += v0[i] * v1[i];
    }
    // std::cout << "Thread End" << std::endl;
}

void dotProductAtomic(const vector<int>& v0, const vector<int>& v1,
    const unsigned int i_start, const unsigned int i_end,
    atomic<unsigned long long>& sum)
{
    // std::cout << "Thread start" << std::endl;
    for (unsigned int i = i_start; i < i_end; i++)
    {
        sum += v0[i] * v1[i];
    }
    // std::cout << "Thread End" << std::endl;
}

auto dotProductFuture(const vector<int>& v0, const vector<int>& v1,
    const unsigned int i_start, const unsigned int i_end)
{
    
    int sum = 0;
    for (unsigned int i = i_start; i < i_end; i++)
    {
        sum += v0[i] * v1[i];
    }
    return sum;
}

void Projects_19::m19_6()
{
    // 19.6 멀티쓰레딩 예제 (백터 내적)

    /*
        v0 = { 1,2,3 };
        v1 = { 4,5,6 };
        v0_dot_v1 = 1 * 4 + 2 * 5 + 3 * 6;
    */

    const long long n_data = 3'000;
	const unsigned n_threads = 4;

	std::vector<int> v0, v1;
	v0.reserve(n_data);
	v1.reserve(n_data); // push_back할 때 효율을 높이기 위해서 썼음
    
    random_device seed;
    mt19937_64 engine(seed());

    uniform_int_distribution<> uniformDist(1, 10);

    for (long long i = 0; i < n_data; ++i)
    {
        cout << i << endl;
        v0.push_back(uniformDist(engine)); // 랜덤 값
        v1.push_back(uniformDist(engine)); // 랜덤 값
    }

    std::cout << "std::inner_product" << std::endl;
    {
        const auto sta = chrono::steady_clock::now();

        const auto sum = std::inner_product(v0.begin(), v0.end(), v1.begin(), 0ull); // 0 unsigned long long

        const chrono::duration<double> dur = chrono::steady_clock::now() - sta; // 시간 측정

        cout << dur.count() << endl;
        cout << sum << endl; // inner_product의 정답
        cout << endl;
    }

    cout << "Navtive" << endl;
    if(false) // 결과가 안좋다
    {
        const auto sta = chrono::steady_clock::now();
        unsigned long long sum = 0;
        vector<thread> threads;
        threads.resize(n_threads);

        const unsigned int n_per_thread = n_data / n_threads;
        for (unsigned int t = 0; t < n_threads; ++t)
        {
            threads[t] = thread(dotProductNative, ref(v0), ref(v1),
                t * n_per_thread, (t + 1) * n_per_thread, ref(sum));
        }

        for (unsigned int t = 0; t < n_threads; ++t)
        {
            threads[t].join();
        }

        const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

        cout << dur.count() << endl;
        cout << sum << endl;
        cout << endl;
    }

    cout << "Lock Guard" << endl;
    if (false) // 멀티쓰레딩이 느리다. 오히려 성능이 떨어진다.
    {
        const auto sta = chrono::steady_clock::now();
        unsigned long long sum = 0;
        vector<thread> threads;
        threads.resize(n_threads);

        const unsigned int n_per_thread = n_data / n_threads;
        for (unsigned int t = 0; t < n_threads; ++t)
        {
            threads[t] = thread(dotProductLock, ref(v0), ref(v1),
                t * n_per_thread, (t + 1) * n_per_thread, ref(sum));
        }

        for (unsigned int t = 0; t < n_threads; ++t)
        {
            threads[t].join();
        }

        const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

        cout << dur.count() << endl;
        cout << sum << endl;
        cout << endl;
    }

    cout << "Atomic" << endl;
    if (false) // 멀티쓰레딩이 느리다. 오히려 성능이 떨어진다.
    {
        const auto sta = chrono::steady_clock::now();
        atomic<unsigned long long> sum = 0;
        vector<thread> threads;
        threads.resize(n_threads);

        const unsigned int n_per_thread = n_data / n_threads;
        for (unsigned int t = 0; t < n_threads; ++t)
        {
            threads[t] = thread(dotProductAtomic, ref(v0), ref(v1),
                t * n_per_thread, (t + 1) * n_per_thread, ref(sum));
        }

        for (unsigned int t = 0; t < n_threads; ++t)
        {
            threads[t].join();
        }

        const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

        cout << dur.count() << endl;
        cout << sum << endl;
        cout << endl;
    }

    cout << "Future" << endl;
    if (false) 
    {
        const auto sta = chrono::steady_clock::now();
        unsigned long long sum = 0;
        // vector<thread> threads;
        vector<future<int>> futures;
        futures.resize(n_threads);

        const unsigned int n_per_thread = n_data / n_threads;
        for (unsigned int t = 0; t < n_threads; ++t)
        {
            futures[t] = std::async(dotProductFuture, ref(v0), ref(v1),
                t * n_per_thread, (t + 1) * n_per_thread);
        }

        for (unsigned int t = 0; t < n_threads; ++t)
        {
            sum += futures[t].get();
        }

        const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

        cout << dur.count() << endl;
        cout << sum << endl;
        cout << endl;
    }

    cout << "std::transform_reduce" << endl;
    if (true)
    {
        const auto sta = chrono::steady_clock::now();
        const auto sum = transform_reduce(execution::par,
            v0.begin(), v0.end(), v1.begin(), 0ull);
        
        const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

        cout << dur.count() << endl;
        cout << sum << endl;
        cout << endl;
    }
}