#include "projects.h"

void addOne(int& y) // 이렇게 reference로 선언하면 함수에 영향을 줄 수 있다.
{					// 복사가 이루어지지는 않는다. 변수 자체가 넘어간다.
	cout << "addOne() address : " << &y << endl;
	y += 1;
}

void addTwo(const int& y) // 매개변수에 const를 붙이는 것이 좋다.
{
	cout << "addTwo() address : " << &y << endl;
}

void addThree(int*& y) // pointer 변수를 reference로 받으려면 어떻게 해야할까? 
{
	cout << "매개변수 y의 address : " << &y << endl;
	cout << "Same as main value address: " << y << endl;
	cout << "addThree value: " << *y << endl;
	*y = 1;
	// &y = 2; (불가능하다.)
}

void printElements(const vector<int>& arr)
{
	for (auto& elements : arr)
	{
		cout << elements << endl;
	}
}
						//  입력           // 출력 1       // 출력 2
void getSinCos(const double degree, double& sin_out, double& cos_out)
{
	// 여기서 double degree는 값이 전달되서 함수 밖으로 영향을 주지 못하기 때문에
	// 입력으로 생각할 수 있다.
	// sin_out, cos_out은 double& 로 선언되어서 함수밖에도 영향을 줄 수 있다.
	// 이것은 output이 여러개인 것 처럼 구현한 예이다.
	const double pi = 3.1415912;
	double radians = ((degree * pi) / 180.0);
	sin_out = sin(radians); // sin_out은 값이 변하고 있다.
	cos_out = cos(radians); // cos_out은 값이 변하고 있다.
}

void Projects_7::m7_3()
{
	// 7.3 참조에 의한 인수 전달 (call by reference)
	int x = 7;
	cout << "main x: " << x << " address: " << &x << endl;

	addOne(x); // 여기서는 변수 자체가 함수의 파라메터로 넘어갔다.
	cout << "main x: " << x << " address: " << &x << endl;
	cout << endl; 

	addTwo(5); // 이렇게 하려면 void addTwo(const int& y) ; const를 붙여야 한다.

	double sin(0.0);
	double cos(0.0);
	getSinCos(30, sin, cos);
	cout << "sin: " << sin << " " << "cos: " << cos << endl;
	cout << endl;

	// pointer 변수를 reference로 받으려면 어떻게 해야할까? 
	int a = 5;
	int* ptr = &a;
	cout << "int* ptr: " << ptr << endl;
	*ptr = 6;
	addThree(ptr);
	cout << "최종적인 a의 value: " << a << endl;
	cout << endl;

	// 동적배열을 출력하는 경우를 설명한다.
	vector<int> arr{ 1,2,3,4 };
	printElements(arr);

}
