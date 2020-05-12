#include "projects.h"

class Fraction_cp
{
private: 
	int numerator;
	int denominator;

public:
	
	Fraction_cp(const int& num_in, const int& deno_in = 1) 
		:numerator(num_in),	denominator(deno_in)
	{
		cout << "constructor called" << endl;
		assert(deno_in != 0);
	}

	Fraction_cp(const Fraction_cp& fr)
		:numerator(fr.numerator), denominator(fr.denominator)
	{ // 복사생성자 같은 instance가 들어오는 것!
		cout << "Copy constructor called" << endl;
		cout << "만일, copy constructor 호출을 막고 싶으면 " << endl;
		cout << "private으로 옮기면 된다." << endl;
	}
	
	friend ostream& operator << (ostream& out, const Fraction_cp& f)
	{
		out << f.numerator << " / " << f.denominator << endl;
		return out;
	}
};

Fraction_cp returnFraction_cp()
{
	Fraction_cp temp(1, 2);
	cout <<"&temp address: "<< &temp << endl;
	return temp;
}

void Projects_9::m9_9()
{
    // 9.9 복사 생성자, 복사 초기화 반환값 최적화
	Fraction_cp fr(4, 7);
	cout << fr << endl;

	Fraction_cp copy(fr);
	// Fraction_cp copy = fr;
	cout << copy << endl;

	Fraction_cp copy_dir(Fraction_cp(3, 9));
	cout << copy_dir << endl;
	cout << "이 경우 복사생성자가 생성이 되지 않는다. " << endl;

	Fraction_cp returnCP = returnFraction_cp();
	cout << returnCP << endl;
	cout << "&returnCP address: " << &returnCP << endl;
	cout << "Debug mode 일때는 주소가 다르지만" << endl;
	cout << "Release mode 일때는 주소가 같다. " << endl;
}