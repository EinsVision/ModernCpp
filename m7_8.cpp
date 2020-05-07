#include "projects.h"

class defaultParam
{
public:
	void defaultParameter3(int x = 40, int y = 50, int z = 60);
	//declaration���� �Ű������� �⺻���� �����ߴٸ� definition���� �������� �ʴ´�.
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
{ // �Ѱ����� default parameter setting�� �Ǿ�� �Ѵ�.
//declaration���� �Ű������� �⺻���� �����ߴٸ� definition���� �������� �ʴ´�.
	cout << "defaultParameter3: " << x << endl;
	cout << "defaultParameter3: " << y << endl;
	cout << "defaultParameter3: " << z << endl;
	cout << endl;
}

void printAmbi(int x) {};			// ambiguous call to overloaded function
void printAmbi(int x, int y=10) {}; // ambiguous call to overloaded function

void Projects_7::m7_8()
{
	// 7.8 �Ű������� �⺻�� (default parameters)
	defaultParameter(); // �ƹ��͵� �� �־ ����� �ȴ�.
	defaultParameter(3);
	defaultParameter1(100);
	defaultParameter1(100,200);
	defaultParameter1(100,200,300);
	defaultParameter2(1000, 2000);

	defaultParam dp;
	dp.defaultParameter3();

	// ������ ������ �Ǵ� ����̴�.
	//printAmbi(10); // ambiguous call to overloaded function
}
