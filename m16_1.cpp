#include "projects.h"

void sequence_containers()
{
    // vector (자료를 뒤에다 넣는다.)
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

    // deque (자료를 앞에다 넣을 수 있고 뒤에도 넣을 수 있다.)
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
    // set (중복이 되지 않는다.) 집합
    // 내부에 겹치면 그냥 무시해버리는 기능을 가지고 있다.
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

    // multiset (duplication이 허용됨)
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
        cout << stack.top() << endl; // 맨위에 3이 있다.
        stack.pop();                 // 가장 위에 있는 것을 제거한다.
        cout << stack.top() << endl; // 맨위에 2이 있다.
    }

    // queue
    {
        cout << "Queue: " << endl;

        queue<int> queue;
        queue.push(1);
        queue.push(2);
        queue.push(3);
        cout << queue.front() << " " << queue.back() << endl;
        queue.pop();           // 가장 먼저들어온게 제거된다.      
        cout << queue.front() << " " << queue.back() << endl;
    }

    // priority queue // sorting을 해준다.
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
    // 16.1 표준 템플릿 라이브러리, 컨테이너 소개 standard template libraries
    sequence_containers();

    associative_containers();

    container_adapters();
}