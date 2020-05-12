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
	// 9.12 이니셜라이져 리스트 std::initializer_list 
	int my_arr[5]{ 1,2,3,4,5 };
	// InitArray_9 initArr { 1, 2, 3, 4, 5 };
	// 내가 정의한 자료형은 이니셜라이져가 되지 않지만 정의하면 가능하다.
	InitArray_9 initArr { 1, 2, 3, 4, 5 };
	cout << initArr << endl;
}