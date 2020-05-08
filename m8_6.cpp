#include "projects.h"
// 그냥 vector 쓰는게 방법이다. 
// 그 이유는 new / delete이 느리고, 메모리 누수가 발생할 수 있기 때문이다.
class simple
{
private:
	int id;

public:
	simple(const int& id_in)
		: id(id_in)
	{
		cout << "constructor called: " << id << endl;
	}

	~simple()
	{
		cout << "destructor called: " << id << endl;
	}

};

class IntArray
{
private:
	int* ptrArray = nullptr;
	int length = 0;

public:
	IntArray(const int length_in)
	{
		length = length_in;
		ptrArray = new int[length];
		cout << "constructor !" << endl;
	}

	int getLength()
	{
		return length;
	}
	~IntArray()
	{
		if (nullptr != ptrArray)
		{
			delete[] ptrArray;
		}
		
		cout << "destroy !" << endl;
	}
};

void Projects_8::m8_6()
{
	// 8.6 소멸자 destructor
	// simple sim1(0);
	simple* sim1 = new simple(0); // 동적할당의 경우
	simple sim2(1);

	delete sim1;

	while (true)
	{
		IntArray intArr(100);
		// 지금 IntArray class는 delete가 없어 메모리 누수가 발생한다.
		// 이럴 경우, 소멸자를 사용하면 된다.
	}
}
