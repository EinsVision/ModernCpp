#include "projects.h"

void Projects_6::m6_21()
{
	// 6.21 std::vector �Ұ�
	// ���� array�� ��ü�� �� �ִ�. 
	// std::array<int, 5> my_arr;
	vector<int> my_arr; // size�� ���� �ʴ´�.
	vector<int> my_arr2{ 1,2,3,4,5 };
	vector<int> myvector(5);

	cout << "my_arr2.size() : "<<my_arr2.size() << endl;
	cout << "my_arr2.data() :" << my_arr2.data() << endl;
	cout << "&my_arr2: " << &my_arr2 << endl;
	cout << endl; 

	// vector�� delete�� �ڵ����� ���ش�.
	my_arr2.resize(10); // �������� �޸��� ����� �ø��� �ִ�.
	for (auto& element : my_arr2)
	{
		cout << element << " ";
	}
	cout << endl;
	cout <<"my_arr2.capacity() : " <<my_arr2.capacity() << endl;

	cout << "myvector.size() : " << myvector.size() << endl;
	int* p = myvector.data();
	cout << "myvector.data() :" << myvector.data() << endl;
	*p = 1;
	++p; // myvector�� ����Ű�� ��ġ�� �����Ŵ +1 �������״�.
	*p = 2;
	++p; // myvector�� ����Ű�� ��ġ�� �����Ŵ +1 �������״�.
	*p = 3;
	p[2] = 4; // 1 2 3 0 4  : myvector �̷��� ������ ��������.
	for (auto& element : myvector)
	{
		cout << element << " ";
	}
	cout << " : myvector" << endl;


}
