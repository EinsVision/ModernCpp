#include "projects.h"

void Projects::m2_2()
{
	// 2.2 정수형
	short s = 1;
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << "short: "<< sizeof(short) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "long long: " << sizeof(long long) << endl;

	cout << pow(2, sizeof(short) * 8-1) -1 << endl;
	cout << numeric_limits<short>::max() << endl; // short 형 최대값
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	short ss = 32767+ 1;  // 1. overflow 발생한다.  
	unsigned int ii = -1; // 2. overflow 발생한다.
	int div = 22 / 4;	  // 3. 절삭되는 문제가 있다.
	
	cout << ss << endl;  
	cout << "unsigned int : " << ii << endl;
	cout << "div : " << div << endl;

}
