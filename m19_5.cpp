#include "projects.h"

void Projects_19::m19_5()
{
    // 19.5 �۾� ��� �񵿱� ���α׷��� task-based async programming (async, future, promise)

    // multithreading
    {
        int result;
        std::thread t([&]() {result = 1 + 2; });
        // thread�� �����Ѵ�. 

        t.join();
        cout << result << endl;
        cout << endl;
    } 

    // task-based parallelism
    {
        //std::future<int> fut = ...
        auto fut = std::async([]() {return 1 + 2; });
        // � �۾��� �� ������ ���Ѵ�. ���� �Լ��� �������.

        // thread���� async�� �� ��ȣ�Ѵ�.
        // return���ִ� ���� �ٷ� ���� ���� �� �ִ� ���� �ƴϴ�.
        // 1�ð� �̻��� �ɸ� �� �� �ִ� ���귮�̴�. 
        // �Ϲ����� return�� �ٸ���.
        cout << fut.get() << endl;
        // �۾��� ������ �ʾ����� �� �κп��� ��ٸ���.
    } 

    // future and promise
    {
        // future�� async�� thread���� ��밡���ϴ�.
        promise<int> prom; // �̰� ���� ������ thread�� ����� �� 
        // asyncó�� �ٷ� ���� �� ����, ����� ��ó���� �Ѵ�.
        auto fut = prom.get_future();

        auto t = thread([](promise<int>&& prom) // R value Reference!
            {
                prom.set_value(1 + 2);
            }, move(prom)
        );

        cout << fut.get() << endl; 
        // ����� �Ϸ�� ������ �Ͽ����� ��ٸ��� ���°� �ȴ�.
        t.join(); // thread�̱� ������ join()�� ����Ѵ�.
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
        ); // asynce2�� ���� ������ �����̴�.

        cout << "Main function" << endl;
    }
}