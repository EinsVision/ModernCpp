#include "projects.h"

void Projects_7::m7_13()
{
	// 7.13 방어적 프로그래밍의 개념 (defensive programming)
	// 많은 사람이 사용하는 프로그램은 입력에 주의해야 한다.

	// systax error (문법오류)
	// int y 

	// sementic error (논리오류)
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
