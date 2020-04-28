#include "projects.h"

//namespace cnst_m2_9
//{
//	extern const double pi;
//	extern const double avogadro;
//	extern const double moon_gravity;
//}

namespace work1
{
	void doSomething()
	{
		cout << "Work 1" << endl;
	}
}

namespace work2
{
	void doSomething()
	{
		cout << "Work 2" << endl;
	}
}

void Projects_4::m4_1()
{
	// 4.1 ���� ����, ����, ���ӱⰣ (Scope // Duration : �޸𸮰� ���ӵǴ� ����) 
	// case 1 :: apple = 1; (Scope : apple ������ ���� �Ǿ�� �Ѵ�.)
	int apple = 0;
	apple = 1;

	cout << "apple 1: " << apple << endl;

	{
		//apple = 3;
		int apple = 3;// (int apple �� ��� ���� �� �ִ� ������ ���Ͼȿ����� �����ϴ�.)
		cout << "apple 2: " << apple << endl; // name hiding �� �߻��Ѵ�.
	}

	cout << "apple 3: " << apple << endl;
	cout << endl;

	work1::doSomething(); // namespace�� ������ �Ȱ��� �̸��� �Լ��� ����� �� �ִ�.
	work2::doSomething();
	
}

// case 2 :: apple = 1; (Scope : apple ����� ��ġ�� ���)

void doSomething4_1()
{
	// int a = 1; // �Ҵ��� �ǰ� �ٽ� �Ҵ��� �ȴ�. 
	static int a = 1; // memory a�� static�̶�� ���̴�. 
	// static�� �ʱ�ȭ�� �ѹ� �ۿ� ���� �ʴ´�.
	cout << cnst_m2_9::pi << " " << &(cnst_m2_9::pi) << endl;
	++a;
	// cout << a << endl;
}