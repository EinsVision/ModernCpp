#include "projects.h"

void Projects_5::m5_1()
{
	// 5.1 ���� �帧 ���� Control flow (�ߴ� Halt)

	// 1. �ߴ� Halt
	// 2. ���� Jump (goto, break, continue)
	// 3. ���Ǻб� Conditional branches (if, switch)
	// 4. �ݺ� Loops (while, do while, for)
	// 5. ����ó�� Exceptions (try, catch, throw)

	cout << "I love you" << endl;

	return;		// 1. �ߴ� Halt return type�� ������� �Ѵ�.
	exit(0);    // 1. �ߴ� Halt ���ϰ� ���������� ��Ȳ�̴�. (������ ����Ǿ�� �ϴ� ��Ȳ���� ���δ�.)
	// ������ �� �޾� �ְ� �߰��� �������� ��Ȳ
	cout << "I love you too" << endl;
}
