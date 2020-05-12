#include "projects.h"

class MyString
{
public:
	char* m_data = nullptr;
	// std::string data; �� ���� ���� ���縦 �ذ��� �� �ִ�.
	int m_length = 0;

public:
	MyString(const char* source = "")
	{
		assert(source); // ���ڿ��� ������� ������ �ܾ��� ���Ҵ�.

		m_length = strlen(source) + 1; // ���ڿ��� Null char �߰�
		m_data = new char[m_length];
		for (int i = 0; i < m_length; i++)
		{
			m_data[i] = source[i];
		}
		m_data[m_length - 1] = '\0';
	}

	// ���� ����� ������ �ȴ�. �׷��� copy constructor�� �����ؾ� �Ѵ�.
	MyString(const MyString& source)
	{
		cout << "Copy constructor called" << endl;
		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length]; //���⼭ ���� �޸� �Ҵ�!

			for (int i = 0; i < m_length; i++) // �޸𸮸� �����Ѵ�.
			{
				m_data[i] = source.m_data[i];
			}
		}
		else
		{
			m_data = nullptr;
		}
	}

	// ���� ����� ������ �ȴ�. �׷��� ���� �����ڸ� �����ؾ� �Ѵ�.
	MyString& operator = (const MyString& source)
	{
		cout << "assigendment operator called" << endl;

		if (this == &source) // prevent self-assignedment
		{ // �̷� ��� ���α׷��� ������ ���� �� �ִ�.
			return *this;
		}

		delete[] m_data; // ���� �����ڿ��� ���� �ڵ��̴�.

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length]; //���⼭ ���� �޸� �Ҵ�!

			for (int i = 0; i < m_length; i++)
			{
				m_data[i] = source.m_data[i];
			}
		}
		else
		{
			m_data = nullptr;
		}
		return *this;
	}
	

	~MyString()
	{
		if (m_data != nullptr)
		{
			delete[] m_data;
			m_data = nullptr;
			cout << "Destructor " << endl;
		}
		else
		{
			cout << "m_data is already nullptr " << endl;
		}
	}
	char* getString()
	{
		return m_data;
	}

	int getLength()
	{
		return m_length;
	}
};

void Projects_9::m9_11()
{
	// 9.11 ���� ������ �����ε�, ���� ����, ���� ����
	// �����Ҵ� �� �޸𸮿� ���� ������ ������ ����ν� ������ �ִ� class��
	// ���, ���糪 ������ �� �� ���� ���� Ȥ�� ���� ���翡 ���ؼ� 
	// ���� ������ �����ε� Ȥ�� ���� ������ ������ ��ٷο� �� �� �ִ�.
	// ������ ���̺귯������ ���� ������ ���� ������ ����� ���� ����.
	MyString hello("Hello");

	cout << &hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		MyString copy = hello; // ���� �����ڰ� ȣ��ȴ�.
		// ���⼭ �ּҸ��� �����Ѵ�. Heap ���������� �Ҵ�� �޸𸮰� 
		// hello ��ü �ۿ� ����. 
		// copy = hello; // �� ���, ���� �����ڰ� ȣ��ȴ�.
		cout << &copy.m_data << endl;
		cout << copy.getString() << endl;
		// copy �� �� ������ ����� ������� �Ǿ� �ִ�.
		// Heap ������ �ִ� hello ��ü�� �޸𸮱��� �����Ǿ� ���ȴ�.
		// �ֳ��ϸ� copy�� �����͵� hello ��ü�� �޸𸮸� ����Ű�� �־���.
	}

	cout << hello.getString() << endl; // ���� ���翡�� ������ ����� �κ�
}