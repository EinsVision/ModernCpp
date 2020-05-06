#include "projects.h"

void printSize(array<int, 5> my_arr) // �� ��� array�� �޸𸮿� ����Ǳ� ������ main �Լ��� �ּҿ� �ٸ���.
{
	cout <<"printSize my_arr.data() : " <<my_arr.data() << endl;
	cout << "my_arr.size() in printSize: "<<my_arr.size() << endl;
}

void printSizeRef(array<int, 5>& my_arr) 
{
	cout << "printSizeRef my_arr.data() : " << my_arr.data() << endl;
	cout << "my_arr.size() in printSize: " << my_arr.size() << endl;
}

void Projects_6::m6_20()
{
	// 6.20 std::array �Ұ�
	// int Array[5] = { 1,2,3,4,5 };

	array<int, 5> my_arr = { 1,2,3,4,5 };
	cout << "my_arr[0] : " << my_arr[0] << endl;
	cout << "my_arr.at(0): " << my_arr.at(0) << endl;

	// cout << "my_arr[10] : " << my_arr[10] << endl; // �̸� �˻縦 ���Ѵ�.
	// cout << "my_arr.at(10): " << my_arr.at(10) << endl; // �̸� �˻縦 �Ѵ�. �ӵ��� ���� ������.
	cout << "Main my_arr.data(): "<<my_arr.data() << endl; // .data() array�� �ּҸ� ������ش�.
	cout << "&my_arr : "<<&my_arr << endl;

	cout << "my_arr.size() : " << my_arr.size() << endl;
	// Returns the number of elements in the array container.

	printSize(my_arr);	  // main �Լ��� array �ּҿ� �Լ��� array �ּҰ� �ٸ���.
	printSizeRef(my_arr); // main �Լ��� array �ּҿ� �Լ��� array �ּҰ� ����.
	cout << endl;

	array<int, 7> my_arr2{ 67,4,2,6,78,34,55 };
	//for (auto element : my_arr2)
	for (auto& element : my_arr2) // �̷��� �ϸ� �߰��� array�� ����Ǵ� ������ �����ȴ�.
	{
		cout << element << " ";
	}
	cout << endl;

	sort(my_arr2.begin(), my_arr2.end());

	for (auto& element : my_arr2) 
	{
		cout << element << " ";
	}
	cout << ": sorting end" << endl;
	cout << endl;

	sort(my_arr2.rbegin(), my_arr2.rend());

	for (auto& element : my_arr2)
	{
		cout << element << " ";
	}
	cout << ": rever sorting end" << endl;
	cout << endl;
}
