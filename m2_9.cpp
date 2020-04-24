#include "projects.h"

void printNumber(const int num)
{
	// num = 10; // �̷��� �� ������� �ʴ´�. ������ �� ����� ��Ȯ�� ���� �� �� ���� �����̴�.
	// �׷��� printNumber �Լ��� int num �� const �� ���´�.
	int number = num;
	cout << number + 1 << endl;
}

void Projects::m2_9()
{
	printNumber(9);
	// 2.9 �ɺ��� �Լ� constexpr
	const double gravity{ 9.8 }; // �ٸ� ����� �ٲ� �� ������ const ����
	// gravity = 1.2; // ���� ���� �� �� ����.

	// compile time�� runtime �� ���� const�� �����غ���. 
	const int compile_time_const(123);

	int num;
	cin >> num;
	const int run_time_const(num); 
	
	cout << "compile_time_const: " << compile_time_const << endl;
	cout << "run_time_const: " << run_time_const << endl;

	// constexpr �� compile time �� ����� �����Ǿ�� ���� ��������� ��Ÿ����.
	constexpr int constexpr_compile_time_const(23);
	cout << "constexpr_compile_time_const: " << constexpr_compile_time_const << endl;
	cout << cnst_m2_9::pi << endl;

}
