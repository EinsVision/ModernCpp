#include "projects.h"

void Projects::m2_4()
{
	// 2.4 Void, Void Type
	//void my_void; // void는 메모리를 차지하지 않는다.
				    // 이렇게 선언할 수 없다. 
	// Data type 과 size 가 달라도 data의 주소는 어느 type 이나 동일하다
	int i = 123;
	float f = 123.456f;

	void* my_void;
	my_void = (void*)&i;			// data type 과 size 가 달라도 
	cout << "case 1: "<<my_void << endl;
	my_void = (void*)&f;			// data 의 주소는 동일하다.
	cout << "case 2: " << my_void << endl;
}
