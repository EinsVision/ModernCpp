#include "projects.h"

class Fraction_cv
{
private:
	int numerator;
	int denominator;

public:
	Fraction_cv(double) = delete; /*강제로 막을 수 있다.*/

	explicit Fraction_cv(const int& num_in=1, const int& deno_in = 1)
		:numerator(num_in), denominator(deno_in)
	{
		cout << "constructor called" << endl;
		assert(deno_in != 0);
	}

	Fraction_cv(const Fraction_cv& fr)
		:numerator(fr.numerator), denominator(fr.denominator)
	{ // 복사생성자 같은 instance가 들어오는 것!
		cout << "Copy constructor called" << endl;
		cout << "만일, copy constructor 호출을 막고 싶으면 " << endl;
		cout << "private으로 옮기면 된다." << endl;
	}

	friend ostream& operator << (ostream& out, const Fraction_cv& f)
	{
		out << f.numerator << " / " << f.denominator << endl;
		return out;
	}
};

void printClass(Fraction_cv fr)
{
	cout << fr << endl;
}

void Projects_9::m9_10()
{
	// 9.10 변환 생성자(converting constructor), explicit, delete 
	Fraction_cv fcv(7); // converting constructor가 동작했다.
	//printClass(7); // explicit 키워드가 있으면 정확하게 입력해야 한다.
	printClass(fcv); // 더 엄격하게 호출하는 것이다.

	// delete 키워드에 대해 알아보자.
	// Fraction_cv(double) = delete;
	// Fraction_cv(3.14);  다음과 같은 객체를 만들 수 없다.
	// 강력하게 막아버리는 기능이다. 자동으로 casting 되는 경우를 막아준다.
}