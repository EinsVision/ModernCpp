#include "projects.h"

struct Person
{
	int age;
	double height;
};

void PrintPerson(Person ps)
{
	cout << ps.age << endl;
	cout << ps.height << endl;
	cout << "PrintPerson address: "<<&ps << endl;
	cout << endl;
}

void PrintPersonREF(Person& ps)
{
	cout << ps.age << endl;
	cout << ps.height << endl;
	cout << "PrintPersonREF address: " << &ps << endl;
	cout << endl;
}

void PrintPersonPTR(Person* ps)
{
	cout << ps->age << endl;
	cout << ps->height << endl;
	cout << "PrintPersonPTR address: " << ps << endl;
	cout << endl;
}

void Projects_6::m6_16()
{
	// 6.16 포인터와 참조의 멤버 선택 (Member Selection Operators)

	// Structure에 대해 사용자정의 자료형 사용
	Person person;
	cout << "Main address: " << &person << endl;
	person.age = 35;
	person.height = 175.3;
	PrintPerson(person);

	// Structure에 대해 Reference 사용
	Person& ref = person;
	ref.age = 27;
	ref.height = 182.1;
	PrintPersonREF(ref);

	// Structure에 대해 Pointer 사용 
	Person* ptr = &person;
	ptr->age = 33;	 // Member Selection Operators
	(*ptr).age = 23; // Member Selection Operators
	ptr->height = 163.7;
	PrintPersonPTR(ptr);
}
