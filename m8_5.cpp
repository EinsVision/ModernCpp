#include "projects.h"

class Student
{
private:
	int id;
	string name;

public:
	Student(const string& name_in)
		: Student(0, name_in) // [위임생성자] 
	{
		// init(0, name_in);
	} // 이렇게 초기화하는 생성자를 여러개 만드는 것은 비추천!!

	Student(const int& id_in, const string& name_in)
		: id(id_in), name(name_in)
	{
		// init(id_in, name_in);
	} // 초기화하는 생성자는 하나의 함수에 있는 것이 가장 좋다.

	void print()
	{
		cout <<"id : " <<id << " " << "name: "<<name << endl;
	}

	// 초기화 함수를 분리하기도 한다.
	void init(const int& id_in, const string& name_in)
	{
		id = id_in;
		name = name_in;
	}
};

void Projects_8::m8_5()
{
	// 8.5 위임 생성자 delegating constructors
	Student std1(1, "Changdae");
	std1.print();

	Student std2("Dash");
	std2.print();
}
