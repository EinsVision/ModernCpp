#include "projects.h"

void printSize(array<int, 5> my_arr) // 이 경우 array가 메모리에 복사되기 때문에 main 함수의 주소와 다르다.
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
	// 6.20 std::array 소개
	// int Array[5] = { 1,2,3,4,5 };

	array<int, 5> my_arr = { 1,2,3,4,5 };
	cout << "my_arr[0] : " << my_arr[0] << endl;
	cout << "my_arr.at(0): " << my_arr.at(0) << endl;

	// cout << "my_arr[10] : " << my_arr[10] << endl; // 미리 검사를 안한다.
	// cout << "my_arr.at(10): " << my_arr.at(10) << endl; // 미리 검사를 한다. 속도가 좀더 느리다.
	cout << "Main my_arr.data(): "<<my_arr.data() << endl; // .data() array의 주소를 출력해준다.
	cout << "&my_arr : "<<&my_arr << endl;

	cout << "my_arr.size() : " << my_arr.size() << endl;
	// Returns the number of elements in the array container.

	printSize(my_arr);	  // main 함수의 array 주소와 함수의 array 주소가 다르다.
	printSizeRef(my_arr); // main 함수의 array 주소와 함수의 array 주소가 같다.
	cout << endl;

	array<int, 7> my_arr2{ 67,4,2,6,78,34,55 };
	//for (auto element : my_arr2)
	for (auto& element : my_arr2) // 이렇게 하면 중간에 array가 복사되는 과정이 생략된다.
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
