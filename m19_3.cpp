#include "projects.h"

mutex mtx; // mutual exclusion (���� ���ǵ帮�� �Ѵ�.)

void Projects_19::m19_3()
{
    // 19.3 std thread�� ��Ƽ������ ���� multithreading
    // �ϳ��� process�� �������� thread�� ������ �� �ִ�.
    // �ϳ��� cpu�� �������� core�� ������ �� multithreading�� �� �ִ�.
    // multithread�� �������� thread�� �޸𸮸� �����Ѵ�.
    // [Main Thread] (Thread 0) (Thread 1) (Thread 2) ...  
    // ���� ������ �ϱ� ���� ���� �ڽ� thread�� ����� �ش�.
    // �� ���� thread�� ������ �����׷��� �� ó�� �����Ѵ�.
    // thread 0, thread 1, thread 2 �� ��� ���� �۾��� ���� ���� ������
    // �𸥴�. ���� �����⸦ main thread���� ��ٸ���.
    // core ���� 4��! 

    if (false)
    {
        // �� ���μ��� 8��
        const int num_processor = std::thread::hardware_concurrency();
        cout << "logical process: " << num_processor << endl;
        // core ������ Ȯ���Ѵ�.

        // thread id�� ��´�.
        cout << "get main thread id: " << std::this_thread::get_id() << endl;

        std::thread t1 = std::thread([]()
            {
                cout << "get t1 thread id: " << std::this_thread::get_id() << endl;
                while (true)
                {
                    // ���� ���⼭ ������ �ȴ�. �ֳ��ϸ� main thread�� 
                    // ����Ǳ� �����̴�.
                    // t1.join(); �־ t1 Thread�� ��ٸ��� �Ѵ�.
                }
            }
        );
        // �� ���� std::thread() �Լ� �ȿ� �־��ָ� �ȴ�.
        // �Լ�������, std::function, lambda function�� ����ص� �ȴ�.

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


        // t1.join()�� ���� thread t1�� ���� �� ���� ��ٸ���.
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

                mtx.lock(); // �ٸ� thread�� �� ������ ��ٴ�.
                cout << name << " " << std::this_thread::get_id() << endl;
                mtx.unlock(); // Ǯ���ְ� ������.
            }
        };

        // �̷��� �ϸ� work_func("JackJack")�� ����� ��
        // work_func("jcdlove")�� ��� �ִ� ���°� �ȴ�. 
        // ��ȿ�����̴�.
        // work_func("JackJack");
        // work_func("jcdlove");

        // �̷��� �ϸ� t1, t2�� ���ÿ� ���Ѵ�.
        std::thread t1 = std::thread(work_func, "JackJack"); 
        std::thread t2 = std::thread(work_func, "jcdlove");

        t1.join();
        t2.join();
    }
}