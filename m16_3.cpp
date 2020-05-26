#include "projects.h"

void Projects_16::m16_3()
{
    // 16.3 STL 알고리즘 소개 Algorithms
    vector<int> container;
    for (int i = 0; i < 10; i++)
    {
        container.push_back(i);
    }

    auto itr = min_element(container.begin(), container.end());
    cout << "min_element: " << *itr << endl;

    itr = max_element(container.begin(), container.end());
    cout << "max_element: " << *itr << endl;

    cout << endl;

    itr = find(container.begin(), container.end(), 3);
    container.insert(itr, 128);

    cout << "find & insert: " << endl;
    for (auto& e : container)
    {
        cout << e << " ";
    }
    cout << endl;

    cout << "sort  " << endl;

    sort(container.begin(), container.end());
    for (auto& e : container)
    {
        cout << e << " ";
    }
    cout << endl;

    cout << "reverse  " << endl;

    reverse(container.begin(), container.end());
    for (auto& e : container)
    {
        cout << e << " ";
    }
    cout << endl;
    
}