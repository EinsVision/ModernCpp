#include "projects.h"

class Animal127
{
protected:
	string m_name;

public:
	Animal127(string name_in)
		:m_name(name_in)
	{

	}

	string getName()
	{
		return m_name;
	}

	virtual void speak() const = 0; // pure virtual function
	// ���������Լ��� �ǹ̴� "�θ� class���� ��� �������� �𸣰�����
	// �ڽ� class���� �ݵ�� �����϶�"��� �ǹ̰� �ȴ�. 

	/*virtual void speak() const
	{
		cout << m_name << " ??? " << endl;
	}*/
};

class Cat127 : public Animal127
{
public:
	Cat127(string name)
		: Animal127(name)
	{}

	void speak() const
	{
		cout << m_name << " Meow " << endl;
	}
};

class Dog127 : public Animal127
{
public:
	Dog127(string name)
		: Animal127(name)
	{}

	void speak() const
	{
		cout << m_name << " Bark " << endl;
	}
};

class Cow127 : public Animal127
{
public:
	Cow127(string name)
		: Animal127(name)
	{}

	void speak() const
	{
		cout << m_name << " Moo " << endl;
	}
	
};

class IErrorLog // �������̽� Ŭ���� (������ �ؾ��Ѵٸ� ������ �ִ� class)
{ // �̷��� ����� ���� ���̶�� �߰�� ��Ȯ�� �ϱ� ������ �̷��� �θ���.
public:
	virtual bool reportError(const char* errorMessage) = 0;
	virtual ~IErrorLog()
	{

	}
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "write error log to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "print error log to a console" << endl;
		return true;
	}
};

void virtualFunction(IErrorLog& log)
{
	log.reportError("Runtime Error");
}

void Projects_12::m12_7()
{
	// 12.7 ���� ���� �Լ� pure virtual function , �߻� �⺻ Ŭ����, �������̽� Ŭ����
	// ���� ���� �Լ��� body�� ��� �ݵ�� �ڽ� class���� 
	// overriding�� ���־�� �Ѵ�.
	// �߻� �⺻ Ŭ������ ���� ���� �Լ��� ������ �� class�� ���Ѵ�.
	// �������̽� Ŭ����: ��� ���������Լ��� �Ǿ� �ִ� class�� ���Ѵ�.

	// Animal127 ani("Hi"); �����Լ��� �־ ��ü ������ ���� �ʴ´�.
	Cow127 cow("Hello"); // ���⼭ speak()�� ������ ������ error�߻�!!
	cow.speak();

	FileErrorLog fileLog;
	ConsoleErrorLog consoleLog;

	virtualFunction(fileLog);
	virtualFunction(consoleLog);
	// �پ��� ����� ������ �� �� �ִ�.
}