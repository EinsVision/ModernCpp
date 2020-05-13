#include "projects.h"
#include "m10_3_Lecture.h"
void Projects_10::m10_3()
{
	// 10.3 ���հ��� association

	// ���� ������ �Ǵ� �κ��� study()��� event�� �߻��ص� 
	// �� �л����� intel�� ����ȭ�� ���� �ʴ´ٴ� ���̴�. 
	// �׷��� ���� �л��� �����Ѵ�.

	/*Teacher teacher1("prof. Jung");
	Teacher teacher2("prof. Hong");

	Student std1("Jack Jack", 0);
	Student std2("Doljabi", 1);
	Student std3("coffee", 2);*/

	// �ٸ� �Լ����� �������� �����Ҵ����� ��ü�� ����⵵ �Ѵ�.
	Student* std1 = new Student("Jack Jack", 0);
	Student* std2 = new Student("Doljabi", 1);
	Student* std3 = new Student("coffee", 2);

	Teacher* teacher1 = new Teacher("prof. Jung");
	Teacher* teacher2 = new Teacher("prof. Hong");

	Lecture lec1("Language C plus plus ");
	lec1.assignTeacher(teacher1);
	lec1.registerStudent(std1);
	lec1.registerStudent(std2);
	lec1.registerStudent(std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(teacher2);
	lec2.registerStudent(std1);

	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		// event
		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}

	delete std1;
	delete std2;
	delete std3;

	delete teacher1;
	delete teacher2;

	// ���⼭ Lecture lec1 �� LEcture lec2�� �޸𸮸� �����ϰ� ������
	// �л�ó���� ���� ���� code�� �����ؾ� �Ѵ�. synchronize�ؾ� �Ѵ�.
}