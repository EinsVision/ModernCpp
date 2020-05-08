#include "projects.h"

class Student
{
private:
	int id;
	string name;

public:
	Student(const string& name_in)
		: Student(0, name_in) // [���ӻ�����] 
	{
		// init(0, name_in);
	} // �̷��� �ʱ�ȭ�ϴ� �����ڸ� ������ ����� ���� ����õ!!

	Student(const int& id_in, const string& name_in)
		: id(id_in), name(name_in)
	{
		// init(id_in, name_in);
	} // �ʱ�ȭ�ϴ� �����ڴ� �ϳ��� �Լ��� �ִ� ���� ���� ����.

	void print()
	{
		cout <<"id : " <<id << " " << "name: "<<name << endl;
	}

	// �ʱ�ȭ �Լ��� �и��ϱ⵵ �Ѵ�.
	void init(const int& id_in, const string& name_in)
	{
		id = id_in;
		name = name_in;
	}
};

void Projects_8::m8_5()
{
	// 8.5 ���� ������ delegating constructors
	Student std1(1, "Changdae");
	std1.print();

	Student std2("Dash");
	std2.print();
}
