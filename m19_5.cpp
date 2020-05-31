#include "projects.h"

void Projects_19::m19_5()
{
    // 19.5 작업 기반 비동기 프로그래밍 task-based async programming (async, future, promise)

    // multithreading
    {
        int result;
        std::thread t([&]() {result = 1 + 2; });
        // thread를 관리한다. 

        t.join();
        cout << result << endl;
        cout << endl;
    } 

    // task-based parallelism
    {
        //std::future<int> fut = ...
        auto fut = std::async([]() {return 1 + 2; });
        // 어떤 작업을 할 것인지 정한다. 람다 함수를 사용했음.

        // thread보다 async를 더 선호한다.
        // return해주는 값이 바로 현재 받을 수 있는 값이 아니다.
        // 1시간 이상이 걸릴 수 도 있는 연산량이다. 
        // 일반적인 return과 다르다.
        cout << fut.get() << endl;
        // 작업이 끝나지 않았으면 이 부분에서 기다린다.
    } 

    // future and promise
    {
        // future는 async와 thread에서 사용가능하다.
        promise<int> prom; // 이걸 쓰는 이유는 thread를 사용할 때 
        // async처럼 바로 받을 수 없고, 약소을 거처가야 한다.
        auto fut = prom.get_future();

        auto t = thread([](promise<int>&& prom) // R value Reference!
            {
                prom.set_value(1 + 2);
            }, move(prom)
        );

        cout << fut.get() << endl; 
        // 약속이 완료될 때까지 하염없이 기다리는 형태가 된다.
        t.join(); // thread이기 때문에 join()을 써야한다.
    }

    {
        auto f1 = std::async([]()
            {
                cout << "async1 start " << endl;
                this_thread::sleep_for(chrono::seconds(2));
                cout << "async1 end" << endl;
            }
        );

        auto f2 = std::async([]()
            {
                cout << "async2 start " << endl;
                this_thread::sleep_for(chrono::seconds(1));
                cout << "async2 end" << endl;
            }
        ); // asynce2가 먼저 끝나는 형태이다.

        cout << "Main function" << endl;
    }
}