#include "projects.h"

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;
		if ('b' == ch)
			break;		// while 반복문만 빠져나온다.
		if ('r' == ch)
			return;		// 함수를 빠져나온다.
	}

	cout << "BreakOrReturn() : " << endl;
}

void Projects_5::m5_8()
{
	// 5.8 break, continue
	int count = 0;
	while (true)
	{
		cout << count << endl;
		if (count == 10)
			break; // while 반복문을 빠져나간다.
		count++;
	}
	cout << endl;

	// break 과 return 비교
	breakOrReturn();

	bool flag_even = true; // 짝수인 경우
	// continue
	for (int i = 0; i < 10; i++)
	{
		if ((i % 2 == 1) && (flag_even == false))
		{
			cout << "flag_even is false" << endl;
			cout << i << endl;
		}
			
		if ((i % 2 == 0) && (flag_even == true))
		{
			cout << "flag_even is true" << endl;
			continue; // 아래 부분을 실행시키지 않고 for 처음으로 간다.
		}
			
		cout << i << endl;
	}
	cout << endl;

	count = 0;
	do
	{
		if (count == 5)
			continue; // 5만 출력을 하지 않는 code가 된다.
		cout << count << endl;
	} while (++count < 10);
	cout << endl;

	// 아래 경우로 do while 반복문을 구성하면 무한루프에 빠지게 된다.

	//do
	//{
	//	if (count == 5)
	//		continue; // 5만 출력을 하지 않는 code가 된다.
	//	cout << count << endl;

	//	count++;

	//} while (count < 10);

	// 만일 복잡한 class를 만들면 while 밖으로 빼주는 것이 효율적일 것이다

	bool escape_flag = true;

	while (escape_flag)
	{
		char ch;
		cin >> ch;

		if ('x' == ch)
			escape_flag = false;
	}
	cout << "escape_flag worked " << endl;

	while (true)
	{
		char ch;
		cin >> ch;

		if ('x' == ch)
			break;
	}
}
