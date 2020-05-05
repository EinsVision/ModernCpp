#include "projects.h"

void Projects_6::m6_18()
{
	// 6.18 보이드 포인터 (void pointer) (generic pointer)
	int i = 5;
	float f = 3.14f;
	char c = 'c';

	void* ptr = nullptr;

	ptr = &i;
	cout << "int pointer: " << ptr << endl;
	// cout << ptr + 1 << endl; // void pointer는 이 연산이 불가능하다. 몇 byte를 더해야하는지 알 수가 없다.
	// cout << *ptr << endl; // de-referencing이 되지 않는다. 
	// de-referencing을 하려면 void pointer를 cating해야 한다.
	cout << "*static_cast<int*>(ptr): "<<*static_cast<int*>(ptr) << endl;
	cout << endl;

	ptr = &f;
	cout << "float pointer: " << ptr << endl;
	// cout << ptr + 1 << endl; // void pointer는 이 연산이 불가능하다. 
	// cout << *ptr << endl; // de-referencing이 되지 않는다. 
	// de-referencing을 하려면 void pointer를 cating해야 한다.
	cout << "*static_cast<float*>(ptr): " << *static_cast<float*>(ptr) << endl;
	cout << endl;

	ptr = &c;
	cout << "char pointer: " << ptr << endl;
	// cout << ptr + 1 << endl; // void pointer는 이 연산이 불가능하다. 
	// cout << *ptr << endl; // de-referencing이 되지 않는다. 
	// de-referencing을 하려면 void pointer를 cating해야 한다.
	cout << "*static_cast<char*>(ptr): " << *static_cast<char*>(ptr) << endl;
	cout << endl;
}
