#include "projects.h"

void Projects::m2_4()
{
	// 2.4 Void, Void Type
	//void my_void; // void�� �޸𸮸� �������� �ʴ´�.
				    // �̷��� ������ �� ����. 
	// Data type �� size �� �޶� data�� �ּҴ� ��� type �̳� �����ϴ�
	int i = 123;
	float f = 123.456f;

	void* my_void;
	my_void = (void*)&i;			// data type �� size �� �޶� 
	cout << "case 1: "<<my_void << endl;
	my_void = (void*)&f;			// data �� �ּҴ� �����ϴ�.
	cout << "case 2: " << my_void << endl;
}
