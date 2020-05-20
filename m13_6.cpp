#include "projects.h"

template <class T, int size>
class StaticArray
{
private:
	T m_array[size];

public:
	T* getArray() { return m_array; }

	T& operator[](int index)
	{
		return m_array[index];
	}

	void print()
	{
		for (int count = 0; count < size; ++count)
			std::cout << m_array[count] << ' ';
		std::cout << endl;
	}
};


template<int size>
void print(StaticArray<char, size>& array)
{
	for (int count = 0; count < size; ++count)
		std::cout << array[count];
	std::cout << endl;
}

void Projects_13::m13_6()
{
    // 13.6 템플릿을 부분적으로 특수화하기
	StaticArray<int, 4> int4;
	int4[0] = 1;
	int4[1] = 2;
	int4[2] = 3;
	int4[3] = 4;

	int4.print();

	StaticArray<char, 14> char14;
	strcpy_s(char14.getArray(), 14, "Hello, World");

	print(char14);
	//char14.print();
}

