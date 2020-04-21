#include "projects.h"

void Projects::m2_5()
{
	// 2.5 �ε��Ҽ���
	// float (4 byte) / double (8 byte) / long double (8 byte) 
	float f(3.141592f); // �ʱ�ȭ�ϴ� ���
	double d(3.141592);			
	long double ld(3.141592);

	cout << " sizeof(f): " << sizeof(f) << endl;
	cout << " sizeof(d): " << sizeof(d) << endl;
	cout << " sizeof(ld): " << sizeof(ld) << endl;

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	cout << "3.14: "<< 3.14 << endl;
	cout << "31.4e-1: " << 31.4e-1 << endl;
	cout << "31.4e-2: " << 31.4e-2 << endl;
	cout << "31.4e1: " << 31.4e1 << endl;
	cout << "31.4e2: " << 31.4e2 << endl;

	cout << setprecision(16);
	cout << 1.0 / 3.0 << endl; // #include <iomanip>

	float ff(123456789.0f);
	cout << setprecision(9); 
	cout << ff << endl; // 123456792 �̷��� ���� ������ �߻��Ѵ�.

	double dd(0.1);
	cout << setprecision(17);
	cout << dd << endl; // 0.10000000000000001 �̷��� ���� ������ �߻��Ѵ�.

	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	cout << setprecision(17);
	cout << d1 << " :: " << d2<<endl;
	// ���� ���̰� �ִ�.     1 ::  0.99999999999999989

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;
	// �̷��� ���ڰ� ������ �ȵȴ�. 
	// inf
	// -inf
	// - nan(ind)
	cout << posinf << endl;
	cout << neginf << endl;
	cout << nan << endl;
}
