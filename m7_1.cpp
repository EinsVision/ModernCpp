#include "projects.h"
class Add 
{
public:
	int add(int x, int y); // parameter(매개변수)
};

int Add::add(int x, int y)
{
	return x + y;
} // int x 와 int y는 함수가 끝나면 바로 메모리로 반납되는 변수이다. 즉, int x 와 int y는 사라진다. 지역변수인 것이다.

void Projects_7::m7_1()
{
	// 7.1 매개변수와 실인자의 구분 parameter(매개변수) argument(실인자)
	Add ad;
	int x = 1;
	int y = 2;
	cout << "actual parameters: " << ad.add(6, 7) << endl;
	cout << "actual parameters: " << ad.add(x, y+1) << endl;
}
