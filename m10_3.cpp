#include "projects.h"
#include "m10_3_Lecture.h"
void Projects_10::m10_3()
{
	// 10.3 집합관계 association

	// 현재 문제가 되는 부분은 study()라는 event가 발생해도 
	// 각 학생들의 intel이 동기화가 되지 않는다는 것이다. 
	// 그래서 직접 학생을 정의한다.

	/*Teacher teacher1("prof. Jung");
	Teacher teacher2("prof. Hong");

	Student std1("Jack Jack", 0);
	Student std2("Doljabi", 1);
	Student std3("coffee", 2);*/

	// 다른 함수에서 쓰기위해 동적할당으로 객체를 만들기도 한다.
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

	// 여기서 Lecture lec1 과 LEcture lec2가 메모리를 공유하고 있지만
	// 분산처리할 때는 따로 code를 구성해야 한다. synchronize해야 한다.
}