#include "projects.h"

void Projects::m2_2()
{
	// 2.2 ������
	short s = 1;
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << "short: "<< sizeof(short) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "long long: " << sizeof(long long) << endl;

	cout << pow(2, sizeof(short) * 8-1) -1 << endl;
	cout << numeric_limits<short>::max() << endl; // short �� �ִ밪
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	short ss = 32767+ 1;  // 1. overflow �߻��Ѵ�.  
	unsigned int ii = -1; // 2. overflow �߻��Ѵ�.
	int div = 22 / 4;	  // 3. ����Ǵ� ������ �ִ�.
	
	cout << ss << endl;  
	cout << "unsigned int : " << ii << endl;
	cout << "div : " << div << endl;

}
