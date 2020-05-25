#include "projects.h"

void sequence_containers()
{
    // vector (�ڷḦ �ڿ��� �ִ´�.)
    {
        vector<int> vec;
        cout << "vector :" << endl;
        for (int i = 0; i < 10; i++)
        {
            vec.push_back(i);
        }

        for (auto& e : vec)
        {
            cout << e << " ";
        }
        cout << endl;
    }

    // deque (�ڷḦ �տ��� ���� �� �ְ� �ڿ��� ���� �� �ִ�.)
    {
        deque<int> deq;
        cout << "deque :" << endl;
        for (int i = 0; i < 10; i++)
        {
            deq.push_back(i);
            deq.push_front(i);
        }

        for (auto& e : deq)
        {
            cout << e << " ";
        }
        cout << endl;
    }
}

void associative_containers()
{
    // set (�ߺ��� ���� �ʴ´�.) ����
    // ���ο� ��ġ�� �׳� �����ع����� ����� ������ �ִ�.
    {
        set<string> str_set;
        str_set.insert("Hello");
        str_set.insert("Changdae");
        str_set.insert("Hello");

        cout << str_set.size() << endl;

        cout << "set :" << endl;
        for (auto& e : str_set)
        {
            cout << e << " ";
        }
        cout << endl;
    }

    // multiset (duplication�� ����)
    {
        multiset<string> str_set;
        str_set.insert("Hello");
        str_set.insert("Changdae");
        str_set.insert("Hello");

        cout << str_set.size() << endl;

        cout << "multiset :" << endl;
        for (auto& e : str_set)
        {
            cout << e << " ";
        }
        cout << endl;
    }

    // map : key /value 
    {
        map<char, int> map;
        map['c'] = 30;
        map['a'] = 10;
        map['b'] = 20;
        
        cout << map['a'] << endl;

        map['a'] = 100;

        cout << "map :" << endl;
        for (auto& e : map)
        {              // 'a'  100 
            cout << e.first << " "<< e.second<<endl;
        }
        cout << endl;
    }

    // multimap : duplicated keys
    {
        multimap<char, int> map;
        map.insert(pair('c', 30));
        map.insert(pair('a', 10));
        map.insert(pair('b', 20));

        cout << map.count('a') << endl; // 1

        map.insert(pair('a', 100));

        cout << map.count('a') << endl; // 2 

        cout << "multimap :" << endl;
        for (auto& e : map)
        {              // 'a'  100 
            cout << e.first << " " << e.second << endl;
        }
        cout << endl;
    }
}

void container_adapters()
{
    // stack
    {
        cout << "Stack: " << endl;

        stack<int> stack;
        stack.push(1);
        stack.emplace(2);
        stack.emplace(3);
        cout << stack.top() << endl; // ������ 3�� �ִ�.
        stack.pop();                 // ���� ���� �ִ� ���� �����Ѵ�.
        cout << stack.top() << endl; // ������ 2�� �ִ�.
    }

    // queue
    {
        cout << "Queue: " << endl;

        queue<int> queue;
        queue.push(1);
        queue.push(2);
        queue.push(3);
        cout << queue.front() << " " << queue.back() << endl;
        queue.pop();           // ���� �������°� ���ŵȴ�.      
        cout << queue.front() << " " << queue.back() << endl;
    }

    // priority queue // sorting�� ���ش�.
    {
        cout << "Priority Queue: " << endl;

        priority_queue<int> queue;
        for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
        {
            queue.push(n);
        }
        for (int i = 0; i < 10; i++)
        {
            cout << queue.top() << endl;
            queue.pop();
        }
    }
}

void Projects_16::m16_1()
{
    // 16.1 ǥ�� ���ø� ���̺귯��, �����̳� �Ұ� standard template libraries
    sequence_containers();

    associative_containers();

    container_adapters();
}