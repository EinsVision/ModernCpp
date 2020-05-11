#include "projects.h"

class Timer
{
    using clock_t = chrono::high_resolution_clock;
    using second_t = chrono::duration<double, ratio<1>>;
    chrono::time_point<clock_t> start_time = clock_t::now();

public:
    void elapsed()
    {
        chrono::time_point<clock_t> end_time = clock_t::now();
        cout << chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
    }
};

void Projects_8::m8_15()
{
    // 8.15 실행 시간 측정하기
    // 실제 시간을 측정할 때는 release 모드에서 측정해야 한다.
    random_device rnd_device;
    mt19937_64 mersenne_engine{ rnd_device() };

    vector<int> vec(100000);
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        vec[i] = i;
    }

    shuffle(begin(vec), end(vec), mersenne_engine);
    /*for (auto& e : vec)
    {
        cout << e << " ";
    }
    cout << endl;*/

    Timer timer;
    sort(begin(vec), end(vec));

    timer.elapsed();
    /*for (auto& e : vec)
    {
        cout << e << " ";
    }
    cout << endl;*/
}