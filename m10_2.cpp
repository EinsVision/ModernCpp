#include "projects.h"
#include "m10_2_monster.h"

void Projects_10::m10_2()
{
	// 10.2 �������� composition
	// 1. ����(���) / Part-of    / �γ��� ��ü�� �Ϻ��̴�.
	//	  ���谡 ���� �����ϴ�.
	Monster mon1("Sason", Position2D(0, 0));
	cout << mon1 << endl;
	{
		// event
		mon1.moveTo(Position2D(1,1));
		cout << mon1 << endl;
	}
}