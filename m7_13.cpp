#include "projects.h"

void Projects_7::m7_13()
{
	// 7.13 ����� ���α׷����� ���� (defensive programming)
	// ���� ����� ����ϴ� ���α׷��� �Է¿� �����ؾ� �Ѵ�.

	// systax error (��������)
	// int y 

	// sementic error (������)
	int x = 0;
	x = 5;
	if (x >= 5)
	{
		cout << "x is greater than 5 " << endl; // sementic error 
	}

	// violated assumption 
	string hello = "Hello my name is Jack Jack";
	int idx = 0;
	while (true)
	{
		cin >> idx;
		if ((idx <= hello.size() - 1) && (idx >= 0))
		{
			cout << "hello[idx]: " << hello[idx] << endl;
			/*  break;  */
		}
		else
		{
			cout << "Pleas try again!!" << endl;
		}
	}
}
