#include "projects.h"

// data�� function�� ���� �ִ� ���� OBJECT ��� �Ѵ�.
// struct�� function�� �־ ������ �� ���� ����� ����ϱ� ���� class�� ����Ѵ�.
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
	// 8.1 ��ü���� ���α׷��ְ� Ŭ���� class
	// Freinds : name, address, age, height, weight, ... 
	Freinds f1 = { "Changdae", "Mokdong", 35, 175.0, 80.0 };
	// class�� instance��� �θ���.
	cout <<"�޸𸮿� �����͸� �����ϰ� �ִ� ���� instanciation: "<< &f1 << endl;
	f1.print();

	// vector�� Freinds�� Object ������ �� �ִ�.
	vector<Freinds> friends;
	friends.resize(2);

	/*friends[0].print();
	friends[1].print();*/
	for (auto& ele : friends)
	{
		ele.print();
	}
}
