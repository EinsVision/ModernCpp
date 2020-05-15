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
	// 순수가상함수의 의미는 "부모 class에서 어떻게 구현할지 모르겠지만
	// 자식 class에서 반드시 구현하라"라는 의미가 된다. 

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

class IErrorLog // 인터페이스 클래스 (무엇을 해야한다만 가지고 있는 class)
{ // 이러한 기능이 있을 것이라는 중계기 역확을 하기 때문에 이렇게 부른다.
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
	// 12.7 순수 가상 함수 pure virtual function , 추상 기본 클래스, 인터페이스 클래스
	// 순수 가상 함수는 body가 없어서 반드시 자식 class에서 
	// overriding을 해주어야 한다.
	// 추상 기본 클래스는 순수 가상 함수가 포함이 된 class를 말한다.
	// 인터페이스 클래스: 모두 순수가상함수로 되어 있는 class를 말한다.

	// Animal127 ani("Hi"); 가상함수가 있어서 객체 선언이 되지 않는다.
	Cow127 cow("Hello"); // 여기서 speak()를 만들지 않으면 error발생!!
	cow.speak();

	FileErrorLog fileLog;
	ConsoleErrorLog consoleLog;

	virtualFunction(fileLog);
	virtualFunction(consoleLog);
	// 다양한 기능을 갖도록 할 수 있다.
}