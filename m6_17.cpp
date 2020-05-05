#include "projects.h"

void Projects_6::m6_17()
{
	// 6.17 C++11 For-each 반복문 (C++11)
	// int my_arr[]{ 0,1,1,2,3,5,8,13,21,34,55,79 };
	vector<int> my_arr{ 0,1,1,2,3,5,8,13,21,34,55,79 }; // 처음 vector로 my_arr를 선언해 보았다.
	// 동적할당 배열 대신에 vector를 쓰면된다.
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

	// 가장 큰 숫자를 찾아라! 
	for (const auto& n : my_arr)
	{
		max_val = max(max_val, n);
	}
	cout << "max_val: " << max_val << endl;


}
