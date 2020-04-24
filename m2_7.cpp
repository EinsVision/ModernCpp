#include "projects.h"

void Projects::m2_7()
{
	// 2.7 ������ char_type
	char c1(65);
	char c2('A'); //���ڿ��� "Hello World"
	cout << c1 << " " << c2 << endl;
	cout <<"type casting: " <<(int)c1 << " " << (int)c2 << endl;

	// C style type casting (���� ����ȯ)
	cout <<  " C style type casting" << endl;
	cout << (char)65 << endl;
	cout << (int)65 << endl;

	// C++ style type casting (���� ����ȯ)
	cout << " C++ style type casting" << endl;
	cout << char(65) << endl;
	cout << int(65) << endl;

	// static casting (�����Ϸ��� ����ȯ)
	cout << " static casting" << endl;
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;
	// " endl "		  ���ۿ� �ִ� ���� ��� ����ϰ� �ٹٲ��� �϶�� �ǹ��̴�.
	// " std::flush"  ���ۿ� �ִ� ��� ����ض�.
	// " \n "		  �ٹٲ��� �϶�� �ǹ��̴�.
}
