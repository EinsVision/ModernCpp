#include "projects.h"

void Projects::m2_8()
{
	// 2.8 리터럴 함수 
	float pi = 3.14f;	  // pi 는 변수, 3.14f 는 상수
	unsigned int n1 = 5u; // u 는 unsigned 라는 의미이다.
	long n2 = 5L;		  // L 은 long 이라는 의미이다. 
	cout << "pi: " << pi << " n1: " << n1 << " n2: " << n2 << endl;

	// 8진수 Octal
	int octal = 012;
	cout << "octal: " << octal << endl;

	// 16진수 Hexa
	int Hexa = 0xF;
	cout << "Hexa: " << Hexa << endl;

	// 16진수 많이 쓰는 이유는 2진수로 변환이 용이하기 떄문이다.
	// 0011 1010 0111 1111 (3A7F)

	// 2진수 binary
	int bi = 0b1010;
	int bi1 = 0b1111'1010'1000;
	cout << "bi: " << bi << endl;
	cout << "bi1: " << bi1 << endl;
}
