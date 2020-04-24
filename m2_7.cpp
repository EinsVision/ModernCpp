#include "projects.h"

void Projects::m2_7()
{
	// 2.7 문자형 char_type
	char c1(65);
	char c2('A'); //문자열은 "Hello World"
	cout << c1 << " " << c2 << endl;
	cout <<"type casting: " <<(int)c1 << " " << (int)c2 << endl;

	// C style type casting (강제 형변환)
	cout <<  " C style type casting" << endl;
	cout << (char)65 << endl;
	cout << (int)65 << endl;

	// C++ style type casting (강제 형변환)
	cout << " C++ style type casting" << endl;
	cout << char(65) << endl;
	cout << int(65) << endl;

	// static casting (컴파일러가 형변환)
	cout << " static casting" << endl;
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;
	// " endl "		  버퍼에 있는 것을 모두 출력하고 줄바꿈을 하라는 의미이다.
	// " std::flush"  버퍼에 있는 모두 출력해라.
	// " \n "		  줄바꿈을 하라는 의미이다.
}
