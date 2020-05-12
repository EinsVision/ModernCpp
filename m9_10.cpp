#include "projects.h"

class Fraction_cv
{
private:
	int numerator;
	int denominator;

public:
	Fraction_cv(double) = delete; /*������ ���� �� �ִ�.*/

	explicit Fraction_cv(const int& num_in=1, const int& deno_in = 1)
		:numerator(num_in), denominator(deno_in)
	{
		cout << "constructor called" << endl;
		assert(deno_in != 0);
	}

	Fraction_cv(const Fraction_cv& fr)
		:numerator(fr.numerator), denominator(fr.denominator)
	{ // ��������� ���� instance�� ������ ��!
		cout << "Copy constructor called" << endl;
		cout << "����, copy constructor ȣ���� ���� ������ " << endl;
		cout << "private���� �ű�� �ȴ�." << endl;
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
	// 9.10 ��ȯ ������(converting constructor), explicit, delete 
	Fraction_cv fcv(7); // converting constructor�� �����ߴ�.
	//printClass(7); // explicit Ű���尡 ������ ��Ȯ�ϰ� �Է��ؾ� �Ѵ�.
	printClass(fcv); // �� �����ϰ� ȣ���ϴ� ���̴�.

	// delete Ű���忡 ���� �˾ƺ���.
	// Fraction_cv(double) = delete;
	// Fraction_cv(3.14);  ������ ���� ��ü�� ���� �� ����.
	// �����ϰ� ���ƹ����� ����̴�. �ڵ����� casting �Ǵ� ��츦 �����ش�.
}