#include "projects.h"

class InitArray_9
{
private:
	unsigned int m_length = 0;
	int* m_data = nullptr;

public:
	InitArray_9(unsigned int length)
		:m_length(length)
	{
		m_data = new int[length];
	}

	InitArray_9(const initializer_list<int> &list)
		:InitArray_9(list.size())
	{
		int count = 0;
		for (auto& element : list)
		{
			m_data[count] = element;
			++count;
		}
	}

	~InitArray_9()
	{
		delete[] this->m_data;
	}

	friend ostream& operator<<(ostream& out, InitArray_9& arr)
	{
		for (unsigned int i = 0; i < arr.m_length; i++)
		{
			out << arr.m_data[i] << " ";
		}
		out << endl;
		return out;
	}
};

void Projects_9::m9_12()
{
	// 9.12 �̴ϼȶ����� ����Ʈ std::initializer_list 
	int my_arr[5]{ 1,2,3,4,5 };
	// InitArray_9 initArr { 1, 2, 3, 4, 5 };
	// ���� ������ �ڷ����� �̴ϼȶ������� ���� ������ �����ϸ� �����ϴ�.
	InitArray_9 initArr { 1, 2, 3, 4, 5 };
	cout << initArr << endl;
}