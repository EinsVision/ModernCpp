#include "projects.h"

class Mother
{
//private:
protected:
	int m_i;

public:
	Mother() // default ������
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

// Mother class�� ��� �޴� Child class�� ����� ����.
class Child : public Mother
{ // Mother class�� �ִ� ��� ���� Child class�� ����� �� �ִ�.
private: 
	double height; // �̰� Child class ������ ���̴�.

public:
	// ������ ����� �͵� �߿��ϴ�. Mother class ������� �� ���Խ��Ѿ���
	Child(const int& input_i, const double& input_h)
	//	: m_i(input_i), height(input_h)  
		: Mother(input_i), height(input_i)
		// �����ڰ� ȣ��� �� ���Ӱ� �޸𸮰� �Ҵ��� �ȴ�. �׷��� 
		// �� ���, m_i�� �޸𸮰� �������� �ʾƼ� error�� �߻��ϴ� ���̴�.
		// Child class�� �����ڸ� ȣ���� �� Mother class�� �����ڸ� 
		// �Բ� ȣ���Ѵ�.
	{
		//Mother::setValue(input_i); // �� error�� �̷��� �ذ���!
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
	// 11.1 ����� �⺻ (1) is-a relationship
	Mother mother(5);
	mother.setValue(5);
	cout << mother.getValue() << endl;

	Child child(5, 3.14);
	child.setValue(5, 3.14);
	cout << child.getValue() << endl;
}