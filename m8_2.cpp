#include "projects.h"

struct Date_struct
{
	int month;
	int day;
	int year;
};

class Date_class
{
	// private�� �⺻�����̴�. private�� ���¿��� 
	// member ������ �����Ϸ��� access function�� ������ ��
//public:
	int month;
	int day;
	int year;

public:
	// setDate()�� �ܺο� �ǻ� �����ϴ� �Լ��̴�.
	void setDate(const int& month_input, const int& day_input, const int& year_input);
	int getMonth();
	void setMonth(const int& month_input);
	void copyFrom(const Date_class& original);
};

void Date_class::setDate(const int& month_input, const int& day_input, const int& year_input)
{
	month = month_input;
	day = day_input;
	year = year_input;
}

void Date_class::setMonth(const int& month_input)
{
	month = month_input;
}

int Date_class::getMonth()
{
	return month;
}

void Date_class::copyFrom(const Date_class& original)
{// ���⼭ �߿��� ������ �ٸ� �ּҸ� ���� ��ü�ε� ���� class���� ������
	// private member �������� �����ٰ� �� �� �ִ�.
	month = original.month;
	day = original.day;
	year = original.year;
}

void Projects_8::m8_2()
{
	// 8.2 ĸ��ȭ, ���� ������, ���� �Լ�
	// Encapsulation / Access Specifiers / Access Functions
	// ĸ��ȭ�� �ϱ� ���ؼ� ���� ������ �� ���� �Լ��� ����Ѵ�.
	Date_struct today{ 8, 4, 2925 };
	Date_class today_class/*{ 8,4,2021 }*/;
	// copy�� �޸� �ּҰ� �ٸ���. �ٸ� �����.
	today_class.setDate(8, 4, 2021);
	today_class.setMonth(10);
	cout << today_class.getMonth() << endl;

	Date_class copy; // today_class�� �޸� �ּҰ� �ٸ���. �ٸ� �����.
	copy.copyFrom(today_class); // copy�� today_class�� �ٸ� �ּҸ�
	// ���� ��ü�̴�. ������ ���� class�� ���� ������ �Ǿ��� ������ 
	// private member �������� ������ �� �ִ�.
	cout << copy.getMonth() << endl;
}
