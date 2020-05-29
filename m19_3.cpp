#include "projects.h"

mutex mtx; // mutual exclusion (서로 못건드리게 한다.)

void Projects_19::m19_3()
{
    // 19.3 std thread와 멀티쓰데링 기초 multithreading
    // 하나의 process가 여러개의 thread를 관리할 수 있다.
    // 하나의 cpu에 여러개의 core가 존재할 때 multithreading할 수 있다.
    // multithread는 여러개의 thread가 메모리를 공유한다.
    // [Main Thread] (Thread 0) (Thread 1) (Thread 2) ...  
    // 일을 나누어 하기 위해 여러 자식 thread를 만들어 준다.
    // 각 각의 thread가 별도의 프포그램인 것 처럼 동작한다.
    // thread 0, thread 1, thread 2 중 어느 것이 작업이 먼저 끝날 것인지
    // 모른다. 일이 끝나기를 main thread에서 기다린다.
    // core 개수 4개! 

    if (false)
    {
        // 논리 프로세서 8개
        const int num_processor = std::thread::hardware_concurrency();
        cout << "logical process: " << num_processor << endl;
        // core 갯수를 확인한다.

        // thread id를 얻는다.
        cout << "get main thread id: " << std::this_thread::get_id() << endl;

        std::thread t1 = std::thread([]()
            {
                cout << "get t1 thread id: " << std::this_thread::get_id() << endl;
                while (true)
                {
                    // 지금 여기서 문제가 된다. 왜냐하면 main thread가 
                    // 종료되기 때문이다.
                    // t1.join(); 넣어서 t1 Thread를 기다리게 한다.
                }
            }
        );
        // 할 일을 std::thread() 함수 안에 넣어주면 된다.
        // 함수포인터, std::function, lambda function을 사용해도 된다.

        std::thread t2 = std::thread([]()
            {
                cout << "get t2 thread id: " << std::this_thread::get_id() << endl;
                while (true)
                {

                }
            }
        );

        std::thread t3 = std::thread([]()
            {
                cout << "get t2 thread id: " << std::this_thread::get_id() << endl;
                while (true)
                {

                }
            }
        );


        // t1.join()을 쓰면 thread t1이 끝날 때 까지 기다린다.
        t1.join();
        t2.join();
        t3.join();
    }

    if (true)
    {
        auto work_func = [](const string& name)
        {
            for (int i = 0; i < 5; i++)
            {
                this_thread::sleep_for(chrono::milliseconds(500));

                mtx.lock(); // 다른 thread가 못 들어오게 잠근다.
                cout << name << " " << std::this_thread::get_id() << endl;
                mtx.unlock(); // 풀어주고 나간다.
            }
        };

        // 이렇게 하면 work_func("JackJack")이 실행될 떄
        // work_func("jcdlove")는 놀고 있는 형태가 된다. 
        // 비효율적이다.
        // work_func("JackJack");
        // work_func("jcdlove");

        // 이렇게 하면 t1, t2가 동시에 일한다.
        std::thread t1 = std::thread(work_func, "JackJack"); 
        std::thread t2 = std::thread(work_func, "jcdlove");

        t1.join();
        t2.join();
    }
}