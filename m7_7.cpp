#include "projects.h"

int add_function_overloading(int x, int y)
{ // 이름이 같아도 매개변수가 다르기 때문에 다른 함수라고 인식한다.
	return x + y;
}

double add_function_overloading(double x, double y)
{ // 이름이 같아도 매개변수가 다르기 때문에 다른 함수라고 인식한다.
	return x + y;
}

void getRandom(int& x){}
void getRandom(double& x){} // 여기서 반환형을 void로 만들고 return 형을 
							// reference를 이용해서 받는 경우를 만들 수 있다.
void print(char* value){}	// 이렇게 애매한 경우가 발생할 수 있다.
void print(int value){}

void Projects_7::m7_7()
{
	// 7.7 함수 오버로딩
	// return type이 다른 것만으로 함수 오버로딩이 되지 않는다.
	cout << add_function_overloading(3, 4) << endl;
	cout << add_function_overloading(3.14, 2.4) << endl;

	print(0);
	// print("test"); // none of the 2 overloads could convert all the argument types
}
