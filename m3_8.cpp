#include "projects.h"

void Projects_3::m3_8()
{
	// 3.8 비트단위 연산자 Bitwise Operators
	// 예전에는 메모리가 비쌌다. 1byte 가 최고 단위이다. 
	// 1. bool 같은 것은 2bit만 있으면 된다. bit 단위까지 의미있게 쓸려고 제공한다.
	// 2. bit 단위 계산 속도가 더 빨르다.
	// << left shift    // cout 기호와 같지만 다르게 사용된다.
	// >> right shift   // cin 기호와 같지만 다르게 사용된다.
	// ~, &, |, ^		// bitwise operator는 6개이다.
	unsigned int a = 1;
	cout << bitset<8>(a) << endl;

	unsigned int b = 1;
	// left shift
	b = b << 1;
	cout << bitset<8>(b) << " " << b << endl;
	b = b << 1;
	cout << bitset<8>(b) << " " << b << endl;
	b = b << 1;
	cout << bitset<8>(b) << " " << b << endl;
	b = b << 1;
	cout << bitset<8>(b) << " " << b << endl;
	cout << endl;

	// right shift
	b = b >> 1;
	cout << bitset<8>(b) << " " << b << endl;
	b = b >> 1;
	cout << bitset<8>(b) << " " << b << endl;
	b = b >> 1;
	cout << bitset<8>(b) << " " << b << endl;
	b = b >> 1;
	cout << bitset<8>(b) << " " << b << endl;
	cout << endl;

	// bitwise not
	unsigned int c = 1024;
	cout << bitset<16>(c) << " " << c << endl;
	c = ~c;
	cout << bitset<16>(c) << " " << c << endl;
	cout << endl;

	// bitwise AND // bitwise OR // bitwise XOR
	unsigned int d = 0b1100;
	unsigned int e = 0b0110;
	cout << "bitwise AND " << bitset<4>(d & e) << endl;
	cout << "bitwise OR " << bitset<4>(d | e) << endl; 
	cout << "bitwise XOR " << bitset<4>(d ^ e) << endl; 

}
