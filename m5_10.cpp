#include "projects.h"

int getInt()
{
	while(true)
	{
		cout << "Enter an integer number: ";
		int x;
		cin >> x;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "invalid number " << endl;
		}
		else
		{
			// 버퍼를 비워준다.
			cin.ignore(32767, '\n');

			return x;
		}
	}
}

char getOperator()
{
	while (true)
	{
		cout << "Enter an operator (+,-) : ";
		char op;
		cin >> op;
		cin.ignore(32767, '\n'); // buffer를 비워준다.
		if (op == '+' || op == '-')
			return op;
		else
			cout << "Invalid operator, please try again" << endl;
	}
}

void printResult(int x, char op, int y)
{
	if (op == '+')
		cout << (x + y) << endl;
	else if (op == '-')
		cout << (x - y) << endl;
	else
		cout << "Invalid operator " << endl;

}
void Projects_5::m5_10()
{
	// 5.10 std::cin 더 잘 쓰기
	// cin은 콘솔에서 사용자입력을 받아들일 때 유용하게 사용될 수 있다.

	int x = getInt();
	int y = getInt();

	char op = getOperator();

	printResult(x, op, y);
}
