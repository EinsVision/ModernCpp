#include "projects.h"

void Projects_3::m3_7()
{
	// 3.7 이진수 Binary Numbers
	// decimal to binary
	// 148 -> 1001 0100
	// 10 진수를 2진수로 만드는 프로그램 
	int num = 148;
	int mot = 0;
	int remain[8] = { 0 };
	int i = 0;

	while (true)
	{
		
		if (num !=0)
		{
			mot = num / 2;
			remain[i] = num % 2;
			++i;
			num = mot;
		}
		else
		{
			break;
		}
	}
	for (i = 7; i >= 0; --i)
	{
		cout << remain[i] << endl;
	}
	
}
