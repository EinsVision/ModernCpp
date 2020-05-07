#include "projects.h"

class defaultParam
{
public:
	void defaultParameter3(int x = 40, int y = 50, int z = 60);
	//declaration에서 매개변수의 기본값을 설정했다면 definition에는 설정하지 않는다.
};

void defaultParameter(int x = 0)
{
	cout << "defaultParameter: " << x << endl;
}

void defaultParameter1(int x = 10, int y = 20, int z = 30)
{
	cout << "defaultParameter1: " << x << endl;
	cout << "defaultParameter1: " << y << endl;
	cout << "defaultParameter1: " << z << endl;
	cout << endl;
}

void defaultParameter2(int x, int y, int z = 30)
{
	cout << "defaultParameter2: " << x << endl;
	cout << "defaultParameter2: " << y << endl;
	cout << "defaultParameter2: " << z << endl;
	cout << endl;
}

void defaultParam::defaultParameter3(int x, int y, int z)
{ // 한곳에만 default parameter setting이 되어야 한다.
//declaration에서 매개변수의 기본값을 설정했다면 definition에는 설정하지 않는다.
	cout << "defaultParameter3: " << x << endl;
	cout << "defaultParameter3: " << y << endl;
	cout << "defaultParameter3: " << z << endl;
	cout << endl;
}

void printAmbi(int x) {};			// ambiguous call to overloaded function
void printAmbi(int x, int y=10) {}; // ambiguous call to overloaded function

void Projects_7::m7_8()
{
	// 7.8 매개변수의 기본값 (default parameters)
	defaultParameter(); // 아무것도 안 넣어도 출력이 된다.
	defaultParameter(3);
	defaultParameter1(100);
	defaultParameter1(100,200);
	defaultParameter1(100,200,300);
	defaultParameter2(1000, 2000);

	defaultParam dp;
	dp.defaultParameter3();

	// 다음은 문제가 되는 경우이다.
	//printAmbi(10); // ambiguous call to overloaded function
}
