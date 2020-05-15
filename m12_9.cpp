#include "projects.h"

class Base129
{
public:
	int m_i = 0;
	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Dervied129: public Base129
{
public:
	int m_j = 1;
	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void printObject(Base129& b)
{
	b.print();
}

void printObjectSlicing(Base129 b)
{
	b.print();
}

void Projects_12::m12_9()
{
	// 12.9 객체 잘림 object slicing 과 reference wrapper
	Dervied129 d;

	Base129& b = d; // 다형성이 발현된다.
	d.m_j = 3;
	d.m_i = 5;
	b.print();
	printObject(b);
	printObjectSlicing(b);

	Base129 b_os = d; // & 들어가지 않으면 다형성이 발현되지 않는다.
	// 객체 잘림 현상이 발생된다. 
	//printObject(b_os);
	cout << endl;

	// vector의 경우를 들어보자.
	Base129		b_vec;
	Dervied129	d_vec;
	vector<Base129*> my_vec; // OS는 포인터를 쓰면 해결된다.
	my_vec.push_back(&b_vec);
	my_vec.push_back(&d_vec); // Object Slicing이 발생한다.

	for (auto& ele : my_vec)
	{
		ele->print();
	}
	cout << endl;

	// Reference를 쓰고 싶은 경우가 있다.
	Base129		b_vec_ref;
	Dervied129	d_vec_ref;
	// vector<Base129&> my_vec_ref; 이것 처럼 작동한다.
	// vector는 reference를 사용할 수 없는데 다음 키워드를 사용하면 
	// refernece를 쓴것 처럼 사용할 수 있다.
	vector<reference_wrapper<Base129>> my_vec_ref; // OS는 포인터를 쓰면 해결된다.
	my_vec_ref.push_back(b_vec_ref);
	my_vec_ref.push_back(d_vec_ref); // Object Slicing이 발생한다.

	for (auto& ele : my_vec_ref)
	{
		ele.get().print();
	}
}