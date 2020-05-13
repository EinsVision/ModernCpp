#include "projects.h"

class Mother
{
//private:
protected:
	int m_i;

public:
	Mother() // default 생성자
		:m_i(0)
	{}

	Mother(const int& i_in)
		: m_i(i_in)
	{
		cout << "Mother class constructor " << endl;
	}
	void setValue(const int& input_i)
	{
		m_i = input_i;
	}

	int getValue()
	{
		return m_i;
	}

};

// Mother class를 상속 받는 Child class를 만들어 보자.
class Child : public Mother
{ // Mother class에 있는 모든 것을 Child class가 사용할 수 있다.
private: 
	double height; // 이건 Child class 고유의 것이다.

public:
	// 생성자 만드는 것도 중요하다. Mother class 내용까지 잘 포함시켜야함
	Child(const int& input_i, const double& input_h)
	//	: m_i(input_i), height(input_h)  
		: Mother(input_i), height(input_i)
		// 생성자가 호출될 때 새롭게 메모리가 할당이 된다. 그러나 
		// 이 경우, m_i의 메모리가 존재하지 않아서 error가 발생하는 것이다.
		// Child class의 생성자를 호출할 때 Mother class의 생성자를 
		// 함께 호출한다.
	{
		//Mother::setValue(input_i); // 위 error를 이렇게 해결함!
		//height = input_h; 
	}

	/*void setValue(const int& input_i, const double& input_h)
	{
		m_i = input_i;
		cout << "m_i : " << m_i << endl;
		height = input_h;
		cout << "height : " << height << endl;
	}*/

	void setValue(const int& input_i, const double& input_h)
	{
		cout << "Mother::setValue(input_i); " << endl;
		Mother::setValue(input_i);
		height = input_h;
	}

	void setValue(const double& input_h)
	{
		height = input_h;
	}

	double getValue()
	{
		return height;
	}
};

void Projects_11::m11_1()
{
	// 11.1 상속의 기본 (1) is-a relationship
	Mother mother(5);
	mother.setValue(5);
	cout << mother.getValue() << endl;

	Child child(5, 3.14);
	child.setValue(5, 3.14);
	cout << child.getValue() << endl;
}