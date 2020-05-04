#include "projects.h"

void Projects_6::m6_9()
{
	// 6.9 포인터 연산과 배열 인덱싱
	int value = 7;
	int* ptr = &value;
	
	cout << ptr - 1 << endl; // pointer도 data type이 필요한 이유가 여기에 있다.
	cout << ptr << endl;	 // +- 1 을 하게되면 4byte 떨어곳의 데이터를 가르킨다.
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	cout << endl; 

	int my_arr[] = { 9,7,5,3,1 }; // 메모리 주소가 이웃해 있다.
	cout << my_arr[0] << " " << &my_arr[0] << endl;
	cout << my_arr[1] << " " << &my_arr[1] << endl;
	cout << my_arr[2] << " " << &my_arr[2] << endl;
	cout << my_arr[3] << " " << &my_arr[3] << endl;
	cout << my_arr[4] << " " << &my_arr[4] << endl;
	cout << endl;

	int* ptr_arr = my_arr;
	for (int i = 0; i < 5; i++)
	{
		cout << (ptr_arr + i) << endl;	// 주소를 출력
		cout << *(ptr_arr + i) << endl; // 값을 출력
	}
	cout << endl;

	// 문자열의 경우
	char name[] = "Jack Jack";
	const int n_name = sizeof(name) / sizeof(char);
	for (int i = 0; i < n_name; i++)
	{
		//cout << name + i << endl;		
		cout << *(name + i) << endl;	// 문자를 출력
	}

}
