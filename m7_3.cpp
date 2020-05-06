#include "projects.h"

void addOne(int& y) // �̷��� reference�� �����ϸ� �Լ��� ������ �� �� �ִ�.
{					// ���簡 �̷�������� �ʴ´�. ���� ��ü�� �Ѿ��.
	cout << "addOne() address : " << &y << endl;
	y += 1;
}

void addTwo(const int& y) // �Ű������� const�� ���̴� ���� ����.
{
	cout << "addTwo() address : " << &y << endl;
}

void addThree(int*& y) // pointer ������ reference�� �������� ��� �ؾ��ұ�? 
{
	cout << "�Ű����� y�� address : " << &y << endl;
	cout << "Same as main value address: " << y << endl;
	cout << "addThree value: " << *y << endl;
	*y = 1;
	// &y = 2; (�Ұ����ϴ�.)
}

void printElements(const vector<int>& arr)
{
	for (auto& elements : arr)
	{
		cout << elements << endl;
	}
}
						//  �Է�           // ��� 1       // ��� 2
void getSinCos(const double degree, double& sin_out, double& cos_out)
{
	// ���⼭ double degree�� ���� ���޵Ǽ� �Լ� ������ ������ ���� ���ϱ� ������
	// �Է����� ������ �� �ִ�.
	// sin_out, cos_out�� double& �� ����Ǿ �Լ��ۿ��� ������ �� �� �ִ�.
	// �̰��� output�� �������� �� ó�� ������ ���̴�.
	const double pi = 3.1415912;
	double radians = ((degree * pi) / 180.0);
	sin_out = sin(radians); // sin_out�� ���� ���ϰ� �ִ�.
	cos_out = cos(radians); // cos_out�� ���� ���ϰ� �ִ�.
}

void Projects_7::m7_3()
{
	// 7.3 ������ ���� �μ� ���� (call by reference)
	int x = 7;
	cout << "main x: " << x << " address: " << &x << endl;

	addOne(x); // ���⼭�� ���� ��ü�� �Լ��� �Ķ���ͷ� �Ѿ��.
	cout << "main x: " << x << " address: " << &x << endl;
	cout << endl; 

	addTwo(5); // �̷��� �Ϸ��� void addTwo(const int& y) ; const�� �ٿ��� �Ѵ�.

	double sin(0.0);
	double cos(0.0);
	getSinCos(30, sin, cos);
	cout << "sin: " << sin << " " << "cos: " << cos << endl;
	cout << endl;

	// pointer ������ reference�� �������� ��� �ؾ��ұ�? 
	int a = 5;
	int* ptr = &a;
	cout << "int* ptr: " << ptr << endl;
	*ptr = 6;
	addThree(ptr);
	cout << "�������� a�� value: " << a << endl;
	cout << endl;

	// �����迭�� ����ϴ� ��츦 �����Ѵ�.
	vector<int> arr{ 1,2,3,4 };
	printElements(arr);

}
