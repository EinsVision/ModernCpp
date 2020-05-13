#include "projects.h"
#include "m11_2_Teacher.h"
#include "m11_2_Student.h"

void Projects_11::m11_2()
{
	// 11.2 상속의 기본 (2) is-a relationship
	Teacher t1("Prof. J");
	t1.setName("Prof. H");
	std::cout << t1.getName() << std::endl;
	t1.printStatus();  // 객체지향을 사용하는 
	//편의성은 기능 추가를 하면 자식 class가 모두 사용할 수 있다.
	t1.teach();
	std::cout << std::endl;

	Student s1("Jack Jack");
	s1.setName("Doljabi");
	std::cout << s1.getName() << std::endl;
	s1.printStatus();  // 객체지향을 사용하는 
	//편의성은 기능 추가를 하면 자식 class가 모두 사용할 수 있다.
	s1.study();
}