#include "projects.h"

inline int min(int x, int y) // inline���� �����ϰԵǸ� �Լ��� �ƴѰ�ó�� �����Ѵ�.
{
	return x > y ? y : x;
}

// ��� �Լ��� inline���� ó���Ѵٰ� �ص� ���α׷��� ������ ���� �ƴϴ�.
void Projects_7::m7_6()
{
	// 7.6 �ζ��� �Լ� inline function
	// �ζ��� �Լ��� �̿��ؼ� ���α׷� ����ȭ�� �õ��ϱ⵵ �Ѵ�.
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;
	
	// inline���� �������� �� ������ ���� �ڵ尡 �ۼ��� ���̴�. 
	cout << (5 > 6 ? 6 : 5) << endl; // �� �ൿ�� �����Ϸ��� �Ѵ�.
	cout << (3 > 2 ? 2 : 3) << endl; // inline �Լ��� �� ������.
}
