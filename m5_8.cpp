#include "projects.h"

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;
		if ('b' == ch)
			break;		// while �ݺ����� �������´�.
		if ('r' == ch)
			return;		// �Լ��� �������´�.
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
			break; // while �ݺ����� ����������.
		count++;
	}
	cout << endl;

	// break �� return ��
	breakOrReturn();

	bool flag_even = true; // ¦���� ���
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
			continue; // �Ʒ� �κ��� �����Ű�� �ʰ� for ó������ ����.
		}
			
		cout << i << endl;
	}
	cout << endl;

	count = 0;
	do
	{
		if (count == 5)
			continue; // 5�� ����� ���� �ʴ� code�� �ȴ�.
		cout << count << endl;
	} while (++count < 10);
	cout << endl;

	// �Ʒ� ���� do while �ݺ����� �����ϸ� ���ѷ����� ������ �ȴ�.

	//do
	//{
	//	if (count == 5)
	//		continue; // 5�� ����� ���� �ʴ� code�� �ȴ�.
	//	cout << count << endl;

	//	count++;

	//} while (count < 10);

	// ���� ������ class�� ����� while ������ ���ִ� ���� ȿ������ ���̴�

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
