#include "projects.h"

mutex mtx194;

void Projects_19::m19_4()
{
    // 19.4 레이스 컨디션, std::atomic, std::scoped_lock
    // 같은 메모리 공간을 공유한다는 것은 오류가 생기는 문제가 될 수 있다.
    // 이러한 경우를 레이스 컨디션이라고 한다.

    // 1. atomic<int> shared_memory(0);
    // 2. mutex 를 사용해서 해결할 수 있다.
    // 3. lock_guard lock(mtx194);  를 쓸 수 있다.
    // 4. scoped_lock lock(mtx194); 을 쓸 수 있다.
    atomic<int> shared_memory(0);

    auto count_func = [&]()
    {
        for (int i = 0; i < 1000; i++)
        {
            this_thread::sleep_for(chrono::milliseconds(1));
            // shared_memory++;
            //lock_guard lock(mtx194);
            scoped_lock lock(mtx194);
            //mtx194.lock(); // 한 개의 thread만 shared_memeory에 접근
                           // 하도록 한다.
            shared_memory.fetch_add(1);
            // mtx194.unlock();

            
        }
    }; // rambda function 정의

    thread t1 = thread(count_func);
    thread t2 = thread(count_func);
    // shared_memory가 2000이 나와야 할 것 같지만 실제로 그렇지 않다.
    // 중간에 다른 thread가 shared_memory를 가로챘기 때문에 값이 이상하다.
    // automic으로 해결할 수 있다.

    t1.join();
    t2.join();

    cout << "After: " << endl;
    cout << shared_memory << endl;
}