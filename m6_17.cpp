#include "projects.h"

void Projects_6::m6_17()
{
	// 6.17 C++11 For-each �ݺ��� (C++11)
	// int my_arr[]{ 0,1,1,2,3,5,8,13,21,34,55,79 };
	vector<int> my_arr{ 0,1,1,2,3,5,8,13,21,34,55,79 }; // ó�� vector�� my_arr�� ������ ���Ҵ�.
	// �����Ҵ� �迭 ��ſ� vector�� ����ȴ�.
	int max_val = 0;

	// change array values
	for (int& number : my_arr)
	{
		number *= 10;
	}
	cout << endl;

	for (int number : my_arr)
	{
		cout << number << " ";
	}
	cout << endl;

	// ���� ū ���ڸ� ã�ƶ�! 
	for (const auto& n : my_arr)
	{
		max_val = max(max_val, n);
	}
	cout << "max_val: " << max_val << endl;


}
