#include "projects.h"

void Projects::m2_8()
{
	// 2.8 ���ͷ� �Լ� 
	float pi = 3.14f;	  // pi �� ����, 3.14f �� ���
	unsigned int n1 = 5u; // u �� unsigned ��� �ǹ��̴�.
	long n2 = 5L;		  // L �� long �̶�� �ǹ��̴�. 
	cout << "pi: " << pi << " n1: " << n1 << " n2: " << n2 << endl;

	// 8���� Octal
	int octal = 012;
	cout << "octal: " << octal << endl;

	// 16���� Hexa
	int Hexa = 0xF;
	cout << "Hexa: " << Hexa << endl;

	// 16���� ���� ���� ������ 2������ ��ȯ�� �����ϱ� �����̴�.
	// 0011 1010 0111 1111 (3A7F)

	// 2���� binary
	int bi = 0b1010;
	int bi1 = 0b1111'1010'1000;
	cout << "bi: " << bi << endl;
	cout << "bi1: " << bi1 << endl;
}
