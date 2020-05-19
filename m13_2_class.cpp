#include "projects.h"

template<typename T>
void MyArray<T>::print()
{
    for (int i = 0; i < m_length; i++)
    {
        cout << m_data[i] << " ";
    }
    cout << endl;
}

// explicit instantiation
template void MyArray<char>::print();
template void MyArray<double>::print();
template void MyArray<int>::print();
template void MyArray<float>::print();

// �� �̷��� ���ָ� �����. class ��ü�� ���ִ� ����� �ִ�.
template class MyArray<char>;
template class MyArray<int>;
template class MyArray<double>;
template class MyArray<float>;
