#include "projects.h"
class Add 
{
public:
	int add(int x, int y); // parameter(�Ű�����)
};

int Add::add(int x, int y)
{
	return x + y;
} // int x �� int y�� �Լ��� ������ �ٷ� �޸𸮷� �ݳ��Ǵ� �����̴�. ��, int x �� int y�� �������. ���������� ���̴�.

void Projects_7::m7_1()
{
	// 7.1 �Ű������� �������� ���� parameter(�Ű�����) argument(������)
	Add ad;
	int x = 1;
	int y = 2;
	cout << "actual parameters: " << ad.add(6, 7) << endl;
	cout << "actual parameters: " << ad.add(x, y+1) << endl;
}
