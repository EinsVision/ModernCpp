#include "projects.h"
#include "m10_2_monster.h"

void Projects_10::m10_2()
{
	// 10.2 구성관계 composition
	// 1. 구성(요소) / Part-of    / 두뇌는 육체의 일부이다.
	//	  관계가 아주 밀접하다.
	Monster mon1("Sason", Position2D(0, 0));
	cout << mon1 << endl;
	{
		// event
		mon1.moveTo(Position2D(1,1));
		cout << mon1 << endl;
	}
}