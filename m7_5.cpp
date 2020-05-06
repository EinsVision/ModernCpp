#include "projects.h"

struct multiReturnValue
{
	int a, b, c, d;
};

multiReturnValue getStruct()
{
	multiReturnValue my_struct{ 1,2,3,4 };
	return my_struct;
}

tuple<int, double> getTuple()
{
	int a = 30;
	double d = 3.14;
	return make_tuple(a, d); 
}

int* getValue(int value)
{
	int returnValue = value * 2;
	return &returnValue;
}

int* allocMemory(int size)
{
	return new int[size];
}

int& getRefValue(int x)
{
	int value = x * 2;
	return value;
}

int& getRef(array<int, 100>& my_arr, int idx)
{
	return my_arr[idx];
}

void Projects_7::m7_5()
{
	// 7.5 다양한 반환 값들(값, 참조, 주소, 구조체, 튜플)
	// 함수가 수행한 결과를 어떻게 받을 것인가에 대한 얘기다. return value
	// pointer return 일 때 문제가 될 수 있는 경우
	int value = 5;
	*getValue(value); // returnValue가 함수가 종료되면서 값이 사라질 수 있기 
					  // 때문에 불안하다. 사라질 변수를 de-referencing 하는것은
					  // 불안하다.
	int* value2 = nullptr;
	value2 = getValue(4);

	cout << value << endl;				// 문제되는 경우 1 (return pointer)
	cout << *value2 << endl;			// 문제되는 경우 2 (return pointer)
	
	int* my_arr = allocMemory(1024);	// 문제되는 경우 3 (return pointer)
	// new를 선언했기 때문에 delete을 해주어야 한다.
	delete[] my_arr;
	cout << endl;

	// reference return 일 때 문제가 될 수 있는 경우
	int &refValue = getRefValue(5); // getRefValue 함수에서 
	// 없어질 reference를 받는 형태이다. 문제가 될 수 있다.
										// 문제되는 경우 1 (return reference)
	cout << refValue << endl;
	cout << refValue << endl; // 메모리가 사라진 것이다.
	cout << endl; 

	// 진짜 특이한 함수를 만나게 될 것이다. Reference의 특성을 이용한 것이다.
	// 함수를 변수처럼 사용하는 경우이다.
	array<int, 100> my_ref_arr;
	my_ref_arr[30] = 10;
	cout <<"my_ref_arr[30] : "<< my_ref_arr[30] << endl;

	//  my_ref_arr[30] = 10;
	getRef(my_ref_arr, 30) = 1024; // 함수를 변수처럼 사용하는 경우이다.
	cout << "my_ref_arr[30] : " << my_ref_arr[30] << endl;

	// 정수 3개를 return으로 받고 싶다면 structure로 받아야 한다.
	multiReturnValue ss = getStruct();
	cout << "getStruct(): " << ss.a << endl;
	cout << "getStruct(): " << ss.b << endl;
	cout << "getStruct(): " << ss.c << endl;
	cout << "getStruct(): " << ss.c << endl;
	cout << endl; 

	// tuple을 사용하면 다수의 return을 받을 수 있다.
	tuple<int, double> my_tuple = getTuple();
	cout <<"get<0>(my_tuple): "<< get<0>(my_tuple) << endl; // a
	cout <<"get<1>(my_tuple): "<< get<1>(my_tuple) << endl; // d

	auto [aValue, dValue] = getTuple();
	cout << "aValue: " << aValue << endl;
	cout << "dValue: " << dValue << endl;
}
