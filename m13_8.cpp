#include "projects.h"

template<class T>
class A138
{
private:
	T m_value;

public:
	A138(const T& input)
		: m_value(input)
	{

	}
	template<typename TT>
	/*void printTypeid()
	{
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
	}*/

	void printTypeid(const TT& input)
	{
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
	}

	void print()
	{
		cout << m_value << endl;
	}
};

void Projects_13::m13_8()
{
	// 13.8 멤버 함수를 한 번 더 템플릿화 하기
	A138<int> a_int(123);
	a_int.print();

	//a_int.printTypeid<float>();
	a_int.printTypeid<float>(3.14);
	a_int.printTypeid('a');
}

