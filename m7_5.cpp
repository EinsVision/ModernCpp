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
	// 7.5 �پ��� ��ȯ ����(��, ����, �ּ�, ����ü, Ʃ��)
	// �Լ��� ������ ����� ��� ���� ���ΰ��� ���� ����. return value
	// pointer return �� �� ������ �� �� �ִ� ���
	int value = 5;
	*getValue(value); // returnValue�� �Լ��� ����Ǹ鼭 ���� ����� �� �ֱ� 
					  // ������ �Ҿ��ϴ�. ����� ������ de-referencing �ϴ°���
					  // �Ҿ��ϴ�.
	int* value2 = nullptr;
	value2 = getValue(4);

	cout << value << endl;				// �����Ǵ� ��� 1 (return pointer)
	cout << *value2 << endl;			// �����Ǵ� ��� 2 (return pointer)
	
	int* my_arr = allocMemory(1024);	// �����Ǵ� ��� 3 (return pointer)
	// new�� �����߱� ������ delete�� ���־�� �Ѵ�.
	delete[] my_arr;
	cout << endl;

	// reference return �� �� ������ �� �� �ִ� ���
	int &refValue = getRefValue(5); // getRefValue �Լ����� 
	// ������ reference�� �޴� �����̴�. ������ �� �� �ִ�.
										// �����Ǵ� ��� 1 (return reference)
	cout << refValue << endl;
	cout << refValue << endl; // �޸𸮰� ����� ���̴�.
	cout << endl; 

	// ��¥ Ư���� �Լ��� ������ �� ���̴�. Reference�� Ư���� �̿��� ���̴�.
	// �Լ��� ����ó�� ����ϴ� ����̴�.
	array<int, 100> my_ref_arr;
	my_ref_arr[30] = 10;
	cout <<"my_ref_arr[30] : "<< my_ref_arr[30] << endl;

	//  my_ref_arr[30] = 10;
	getRef(my_ref_arr, 30) = 1024; // �Լ��� ����ó�� ����ϴ� ����̴�.
	cout << "my_ref_arr[30] : " << my_ref_arr[30] << endl;

	// ���� 3���� return���� �ް� �ʹٸ� structure�� �޾ƾ� �Ѵ�.
	multiReturnValue ss = getStruct();
	cout << "getStruct(): " << ss.a << endl;
	cout << "getStruct(): " << ss.b << endl;
	cout << "getStruct(): " << ss.c << endl;
	cout << "getStruct(): " << ss.c << endl;
	cout << endl; 

	// tuple�� ����ϸ� �ټ��� return�� ���� �� �ִ�.
	tuple<int, double> my_tuple = getTuple();
	cout <<"get<0>(my_tuple): "<< get<0>(my_tuple) << endl; // a
	cout <<"get<1>(my_tuple): "<< get<1>(my_tuple) << endl; // d

	auto [aValue, dValue] = getTuple();
	cout << "aValue: " << aValue << endl;
	cout << "dValue: " << dValue << endl;
}
