#include "projects.h"

int add_function_overloading(int x, int y)
{ // �̸��� ���Ƶ� �Ű������� �ٸ��� ������ �ٸ� �Լ���� �ν��Ѵ�.
	return x + y;
}

double add_function_overloading(double x, double y)
{ // �̸��� ���Ƶ� �Ű������� �ٸ��� ������ �ٸ� �Լ���� �ν��Ѵ�.
	return x + y;
}

void getRandom(int& x){}
void getRandom(double& x){} // ���⼭ ��ȯ���� void�� ����� return ���� 
							// reference�� �̿��ؼ� �޴� ��츦 ���� �� �ִ�.
void print(char* value){}	// �̷��� �ָ��� ��찡 �߻��� �� �ִ�.
void print(int value){}

void Projects_7::m7_7()
{
	// 7.7 �Լ� �����ε�
	// return type�� �ٸ� �͸����� �Լ� �����ε��� ���� �ʴ´�.
	cout << add_function_overloading(3, 4) << endl;
	cout << add_function_overloading(3.14, 2.4) << endl;

	print(0);
	// print("test"); // none of the 2 overloads could convert all the argument types
}
