#include "projects.h"
#include "m11_2_Teacher.h"
#include "m11_2_Student.h"

void Projects_11::m11_2()
{
	// 11.2 ����� �⺻ (2) is-a relationship
	Teacher t1("Prof. J");
	t1.setName("Prof. H");
	std::cout << t1.getName() << std::endl;
	t1.printStatus();  // ��ü������ ����ϴ� 
	//���Ǽ��� ��� �߰��� �ϸ� �ڽ� class�� ��� ����� �� �ִ�.
	t1.teach();
	std::cout << std::endl;

	Student s1("Jack Jack");
	s1.setName("Doljabi");
	std::cout << s1.getName() << std::endl;
	s1.printStatus();  // ��ü������ ����ϴ� 
	//���Ǽ��� ��� �߰��� �ϸ� �ڽ� class�� ��� ����� �� �ִ�.
	s1.study();
}