#include "projects.h"

class MyString
{
public:
	char* m_data = nullptr;
	// std::string data; 로 쓰면 얇은 복사를 해결할 수 있다.
	int m_length = 0;

public:
	MyString(const char* source = "")
	{
		assert(source); // 문자열이 비어있지 않은지 단언해 놓았다.

		m_length = strlen(source) + 1; // 문자열의 Null char 추가
		m_data = new char[m_length];
		for (int i = 0; i < m_length; i++)
		{
			m_data[i] = source[i];
		}
		m_data[m_length - 1] = '\0';
	}

	// 얇은 복사는 문제가 된다. 그래서 copy constructor를 구현해야 한다.
	MyString(const MyString& source)
	{
		cout << "Copy constructor called" << endl;
		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length]; //여기서 동적 메모리 할당!

			for (int i = 0; i < m_length; i++) // 메모리를 복사한다.
			{
				m_data[i] = source.m_data[i];
			}
		}
		else
		{
			m_data = nullptr;
		}
	}

	// 얇은 복사는 문제가 된다. 그래서 대입 연산자를 구현해야 한다.
	MyString& operator = (const MyString& source)
	{
		cout << "assigendment operator called" << endl;

		if (this == &source) // prevent self-assignedment
		{ // 이런 경우 프로그램에 문제가 생길 수 있다.
			return *this;
		}

		delete[] m_data; // 복사 생성자에는 없는 코드이다.

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length]; //여기서 동적 메모리 할당!

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
	// 9.11 대입 연산자 오버로딩, 깊은 복사, 얕은 복사
	// 동적할당 된 메모리에 대한 포인터 변수를 멤버로써 가지고 있는 class의
	// 경우, 복사나 대입을 할 때 깊은 복사 혹은 얇은 복사에 대해서 
	// 대입 연산자 오버로딩 혹은 복사 생성자 구현이 까다로워 질 수 있다.
	// 하지만 라이브러리에서 직접 가져다 쓰기 때문에 고민할 경우는 적다.
	MyString hello("Hello");

	cout << &hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		MyString copy = hello; // 복사 생성자가 호출된다.
		// 여기서 주소만을 복사한다. Heap 영역에서는 할당된 메모리가 
		// hello 객체 밖에 없다. 
		// copy = hello; // 이 경우, 대입 연산자가 호출된다.
		cout << &copy.m_data << endl;
		cout << copy.getString() << endl;
		// copy 는 이 영역을 벗어나면 사라지게 되어 있다.
		// Heap 영역에 있는 hello 객체의 메모리까지 삭제되어 버렸다.
		// 왜냐하면 copy의 포인터도 hello 객체의 메모리를 가리키고 있었다.
	}

	cout << hello.getString() << endl; // 얇은 복사에서 문제가 생기는 부분
}