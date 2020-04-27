#include "projects.h"

void Projects_3::m3_8()
{
	// 3.8 ��Ʈ���� ������ Bitwise Operators
	// �������� �޸𸮰� ��մ�. 1byte �� �ְ� �����̴�. 
	// 1. bool ���� ���� 2bit�� ������ �ȴ�. bit �������� �ǹ��ְ� ������ �����Ѵ�.
	// 2. bit ���� ��� �ӵ��� �� ������.
	// << left shift    // cout ��ȣ�� ������ �ٸ��� ���ȴ�.
	// >> right shift   // cin ��ȣ�� ������ �ٸ��� ���ȴ�.
	// ~, &, |, ^		// bitwise operator�� 6���̴�.
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
