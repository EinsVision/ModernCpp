#include "projects.h"

extern int value = 123; // Global Variable ����    


// �̷��� ���� �Ҵ��ؾ� �޸𸮰� �Ҵ��� �ȴ�.
void Projects_4::m4_2()
{
	// 4.2 ���� ����, ���� ����, ���� ����, �ܺ� ����
	// Global Variable, Static Variable, Internal Linkage, External Linkage
	int value = 456;

}
// static int a = 1; // �ٸ� cpp���Ͽ��� ����� �� ������ �����ش�.
// extern ���������� �ٸ� ���Ͽ����� ����� �� �ֵ��� �Ѵ�. 
// int a = 1;  // doSomething4_2() ���� ����.

void doSomething4_2()
{
    // int a = 1; // �Ҵ��� �ǰ� �ٽ� �Ҵ��� �ȴ�. 
    static int a = 1; // memory a�� static�̶�� ���̴�. 
    // static�� �ʱ�ȭ�� �ѹ� �ۿ� ���� �ʴ´�.
    cout << cnst_m2_9::pi << " " << &(cnst_m2_9::pi) << endl;
    ++a;
    // cout << a << endl;
}