#include "projects.h"

void Projects_16::m16_2()
{
    // 16.2 STL �ݺ��� �Ұ� iterators
    // container�� �ѹ��� �����ϸ� �����͸� ����ϴ� iterator �ݺ��ڰ� 
    // ���ǵǾ� �ִ�.

    vector<int> container;
    for (int i = 0; i < 10; i++)
    {
        container.push_back(i);
    }

    vector<int>::const_iterator itr;
    itr = container.begin();
    cout << "itr : " << *itr << endl;

    while (itr != container.end())
    {
        cout << *itr << " ";
        ++itr;
    }
    cout << endl;

    for (auto itr = container.begin(); itr != container.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // list�� ����غ���.
    // list�� vector�� ������ �ݺ��ڸ� ����Ѵ�.
    cout << "List !! " << endl;

    list<int> containerList;
    for (int i = 0; i < 10; i++)
    {
        containerList.push_back(i);
    }

    for (auto itr = containerList.begin(); itr != containerList.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // set�� ����غ���.
    cout << "Set !! " << endl;

    set<int> containerset;
    for (int i = 0; i < 10; i++)
    {
        containerset.insert(i);
    }

    for (auto itr = containerset.begin(); itr != containerset.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // Map�� ����غ���.
    cout << "Map !! " << endl;

    map<int, char> containerMap;
    for (int i = 0; i < 10; i++)
    {
        containerMap.insert(make_pair(i, char(i+65)));
    }

    for (auto itr = containerMap.begin(); itr != containerMap.end(); itr++)
    {
        cout << itr->first << " " << itr->second << " ";
    }
    cout << endl;

}