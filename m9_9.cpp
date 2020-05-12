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
	{ // ��������� ���� instance�� ������ ��!
		cout << "Copy constructor called" << endl;
		cout << "����, copy constructor ȣ���� ���� ������ " << endl;
		cout << "private���� �ű�� �ȴ�." << endl;
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
    // 9.9 ���� ������, ���� �ʱ�ȭ ��ȯ�� ����ȭ
	Fraction_cp fr(4, 7);
	cout << fr << endl;

	Fraction_cp copy(fr);
	// Fraction_cp copy = fr;
	cout << copy << endl;

	Fraction_cp copy_dir(Fraction_cp(3, 9));
	cout << copy_dir << endl;
	cout << "�� ��� ��������ڰ� ������ ���� �ʴ´�. " << endl;

	Fraction_cp returnCP = returnFraction_cp();
	cout << returnCP << endl;
	cout << "&returnCP address: " << &returnCP << endl;
	cout << "Debug mode �϶��� �ּҰ� �ٸ�����" << endl;
	cout << "Release mode �϶��� �ּҰ� ����. " << endl;
}