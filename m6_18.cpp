#include "projects.h"

void Projects_6::m6_18()
{
	// 6.18 ���̵� ������ (void pointer) (generic pointer)
	int i = 5;
	float f = 3.14f;
	char c = 'c';

	void* ptr = nullptr;

	ptr = &i;
	cout << "int pointer: " << ptr << endl;
	// cout << ptr + 1 << endl; // void pointer�� �� ������ �Ұ����ϴ�. �� byte�� ���ؾ��ϴ��� �� ���� ����.
	// cout << *ptr << endl; // de-referencing�� ���� �ʴ´�. 
	// de-referencing�� �Ϸ��� void pointer�� cating�ؾ� �Ѵ�.
	cout << "*static_cast<int*>(ptr): "<<*static_cast<int*>(ptr) << endl;
	cout << endl;

	ptr = &f;
	cout << "float pointer: " << ptr << endl;
	// cout << ptr + 1 << endl; // void pointer�� �� ������ �Ұ����ϴ�. 
	// cout << *ptr << endl; // de-referencing�� ���� �ʴ´�. 
	// de-referencing�� �Ϸ��� void pointer�� cating�ؾ� �Ѵ�.
	cout << "*static_cast<float*>(ptr): " << *static_cast<float*>(ptr) << endl;
	cout << endl;

	ptr = &c;
	cout << "char pointer: " << ptr << endl;
	// cout << ptr + 1 << endl; // void pointer�� �� ������ �Ұ����ϴ�. 
	// cout << *ptr << endl; // de-referencing�� ���� �ʴ´�. 
	// de-referencing�� �Ϸ��� void pointer�� cating�ؾ� �Ѵ�.
	cout << "*static_cast<char*>(ptr): " << *static_cast<char*>(ptr) << endl;
	cout << endl;
}
