#include "projects.h"

// 구조체의 Person1 과 Person 2를 선언하는 방법
struct Person1
{
	double height;
	double weight;
	int age;
	string name;
};

void printPerson(Person1 prs) // (.) member selection opertor 이다.
{
	cout << "height: " << prs.height << endl;
	cout << "weight: " << prs.weight << endl;
	cout << "age: " << prs.age << endl;
	cout << "name: " << prs.name << endl;
	cout << endl;
}

struct Person2
{
	double height;
	double weight;
	int age;
	string name;

	void printPerson()
	{
		cout << "height: " << height << endl;
		cout << "weight: " << weight << endl;
		cout << "age: " << age << endl;
		cout << "name: " << name << endl;
		cout << endl;
	}
};

Person2 getPS()
{
	Person2 you{ 177.0, 82.1, 27, "Dor" };
	return you;
}

void Projects_4::m4_10()
{
	//  4.10 구조체 struct
	Person1 me{ 175.0, 79.3, 35, "Richard" };
	printPerson(me);
	
	Person2 you = getPS();

	you.printPerson();
}


