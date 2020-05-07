#include "projects.h"

double findAvg(int count, ...)
{
	double sum = 0;
	va_list list;
	va_start(list, count);

	for (int arg = 0; arg < count; arg++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return sum / count;
}


void Projects_7::m7_16()
{
	// 7.16 생략부호 Ellipsis
	// argument의 갯수를 정하지 않는 방법에 대해 배운다.
	cout << findAvg(1, 1, 2, 3, "Hello", 'c') << endl;
	cout << findAvg(3, 1, 2, 3, "Hello", 'c') << endl;
	cout << findAvg(5, 1, 2, 3, 4, 5, "Hello", 'c') << endl;
	cout << findAvg(10, 1, 2, 3) << endl;
}
