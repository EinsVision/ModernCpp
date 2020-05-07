#include "projects.h"

// data와 function이 묶여 있는 것을 OBJECT 라고 한다.
// struct에 function을 넣어도 되지만 더 많은 기능을 사용하기 위해 class를 사용한다.
class Freinds
{
private:	// access specifier

public:		// access specifier
	string name;
	string address;
	int age;
	double height;
	double weight;
	void print();
};

void Freinds::print()
{
	cout << name << endl;
	cout << address << endl;
	cout << age << endl;
	cout << height << endl;
	cout << weight << endl;
}

void Projects_8::m8_1()
{
	// 8.1 객체지향 프로그래밍과 클래스 class
	// Freinds : name, address, age, height, weight, ... 
	Freinds f1 = { "Changdae", "Mokdong", 35, 175.0, 80.0 };
	// class의 instance라고 부른다.
	cout <<"메모리에 데이터를 차지하고 있는 형태 instanciation: "<< &f1 << endl;
	f1.print();

	// vector로 Freinds를 Object 생성할 수 있다.
	vector<Freinds> friends;
	friends.resize(2);

	/*friends[0].print();
	friends[1].print();*/
	for (auto& ele : friends)
	{
		ele.print();
	}
}
