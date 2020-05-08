#include "projects.h"

struct Date_struct
{
	int month;
	int day;
	int year;
};

class Date_class
{
	// private이 기본상태이다. private인 상태에서 
	// member 변수에 접근하려면 access function을 만들어야 함
//public:
	int month;
	int day;
	int year;

public:
	// setDate()는 외부와 의사 소통하는 함수이다.
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
{// 여기서 중요한 개념은 다른 주소를 갖는 객체인데 같은 class에서 나오면
	// private member 변수여도 가져다가 쓸 수 있다.
	month = original.month;
	day = original.day;
	year = original.year;
}

void Projects_8::m8_2()
{
	// 8.2 캡슐화, 접근 지정자, 접근 함수
	// Encapsulation / Access Specifiers / Access Functions
	// 캡슐화를 하기 위해서 접근 지정자 및 접근 함수를 사용한다.
	Date_struct today{ 8, 4, 2925 };
	Date_class today_class/*{ 8,4,2021 }*/;
	// copy와 메모리 주소가 다르다. 다른 존재다.
	today_class.setDate(8, 4, 2021);
	today_class.setMonth(10);
	cout << today_class.getMonth() << endl;

	Date_class copy; // today_class와 메모리 주소가 다르다. 다른 존재다.
	copy.copyFrom(today_class); // copy와 today_class는 다른 주소를
	// 갖는 객체이다. 하지만 같은 class로 부터 선언이 되었기 때문에 
	// private member 변수여도 접근할 수 있다.
	cout << copy.getMonth() << endl;
}
