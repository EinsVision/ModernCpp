#include "projects.h"

mutex mtx194;

void Projects_19::m19_4()
{
    // 19.4 ���̽� �����, std::atomic, std::scoped_lock
    // ���� �޸� ������ �����Ѵٴ� ���� ������ ����� ������ �� �� �ִ�.
    // �̷��� ��츦 ���̽� ������̶�� �Ѵ�.

    // 1. atomic<int> shared_memory(0);
    // 2. mutex �� ����ؼ� �ذ��� �� �ִ�.
    // 3. lock_guard lock(mtx194);  �� �� �� �ִ�.
    // 4. scoped_lock lock(mtx194); �� �� �� �ִ�.
    atomic<int> shared_memory(0);

    auto count_func = [&]()
    {
        for (int i = 0; i < 1000; i++)
        {
            this_thread::sleep_for(chrono::milliseconds(1));
            // shared_memory++;
            //lock_guard lock(mtx194);
            scoped_lock lock(mtx194);
            //mtx194.lock(); // �� ���� thread�� shared_memeory�� ����
                           // �ϵ��� �Ѵ�.
            shared_memory.fetch_add(1);
            // mtx194.unlock();

            
        }
    }; // rambda function ����

    thread t1 = thread(count_func);
    thread t2 = thread(count_func);
    // shared_memory�� 2000�� ���;� �� �� ������ ������ �׷��� �ʴ�.
    // �߰��� �ٸ� thread�� shared_memory�� ����ë�� ������ ���� �̻��ϴ�.
    // automic���� �ذ��� �� �ִ�.

    t1.join();
    t2.join();

    cout << "After: " << endl;
    cout << shared_memory << endl;
}