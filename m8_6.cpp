#include "projects.h"
// �׳� vector ���°� ����̴�. 
// �� ������ new / delete�� ������, �޸� ������ �߻��� �� �ֱ� �����̴�.
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
	// 8.6 �Ҹ��� destructor
	// simple sim1(0);
	simple* sim1 = new simple(0); // �����Ҵ��� ���
	simple sim2(1);

	delete sim1;

	while (true)
	{
		IntArray intArr(100);
		// ���� IntArray class�� delete�� ���� �޸� ������ �߻��Ѵ�.
		// �̷� ���, �Ҹ��ڸ� ����ϸ� �ȴ�.
	}
}
