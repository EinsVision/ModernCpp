#pragma once
#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip> // input/ output manipulators
#include <bitset>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib> // random number generate
#include <ctime>
#include <random>
#include <array>
#include <initializer_list> // 9.12 
#include <tuple>
#include <cassert>
#include <cstdarg> // ellipsis (7.16)
#include <chrono> // 8.15 �ð��� ��� �����̴�.
#include <fstream>
#include <algorithm> 
#include <functional> // 12.9
#include <exception> // 14.4
#include <memory> // smart pointer
#include <deque> // 16.1
#include <set> // 17.1
#include <map> // 17.1
#include <stack> // 17.1
#include <queue> // 17.1
#include <cstddef> // 18.1
#include <locale>  // 18.1
#include <sstream> // string stream
#include <cctype>
#include <bitset>
#include <regex> // ���� ǥ���� 18.5
#include <fstream>

using namespace std;

namespace cnst_m2_9
{
	const double pi( 3.141592 );
	const double avogadro(6.034e23);
	const double moon_gravity(9.8 / 6.0);
}


template<typename T>
class MyArray
{
private:
	int m_length;
	T* m_data;

public:
	MyArray()
	{
		m_length = 0;
		m_data = nullptr;
	}
	MyArray(int length)
	{
		m_length = length;
		m_data = new T[m_length];
	}
	~MyArray()
	{
		reset();
	}
	void reset()
	{
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}
	T& operator[] (int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}
	int getLength()
	{
		return m_length;
	}

	void print();
};

template<typename T, unsigned int T_SIZE>
class MyArray133 // �̷��� template parameter�� ������ compile time��
{				 // �����ȴ�.
private:
	//int m_length;
	T* m_data;

public:
	MyArray133()
	{
		m_data = new T[T_SIZE];
	}
	
	~MyArray133()
	{
		reset();
	}

	void reset()
	{
		delete[] m_data;
		m_data = nullptr;
		//m_length = 0;
	}

	T& operator[] (int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	void print()
	{
		for (int i = 0; i < T_SIZE; i++)
		{
			cout << m_data[i] << " ";
		}
		cout << endl;
	}
};

class Projects
{
public:
	void m2_1(); // 2.1 �⺻ �ڷ��� �Ұ�
	void m2_2(); // 2.2 ������ (Integers)
	void m2_3(); // 2.3 C++ 11 ���� �ʺ� ���� (Fixed-width Integers)
	void m2_4(); // 2.4 ��ġ�� (���̵�, Void)
	void m2_5(); // 2.5 �ε��Ҽ����� floating point numbers
	void m2_6(); // 2.6 �Ҹ��� �ڷ����� ���ǹ� if
	void m2_7(); // 2.7 ������ char type
	void m2_8(); // 2.8 ���ͷ� ��� literal constants
	void m2_9(); // 2.9 �ɺ��� ��� symbolic constants
};
class Projects_3
{
public:
	void m3_1(); // 3.1 ������ �켱������ ���� ��Ģ
	void m3_2(); // 3.2 ��� ������ arithmetic operators
	void m3_3(); // 3.3 ���� ������ increment decrement operators
	void m3_4(); // 3.4 sizeof, ��ǥ ������, ���Ǻ� ������
	void m3_5(); // 3.5 ���� ������ Relational Operators
	void m3_6(); // 3.6 �� ������ logical operators
	void m3_7(); // 3.7 ������ Binary Numbers
	void m3_8(); // 3.8 ��Ʈ���� ������ Bitwise Operators
	void m3_9(); // 3.9 ��Ʈ �÷���, ��Ʈ ����ũ ���� Bit flags, Bit masks
};
class Projects_4
{
public:
	void m4_1(); //  4.1 ���� ����, ����, ���ӱⰣ
	void m4_2(); //  4.2 ���� ����, ���� ����, ���� ����, �ܺ� ����
	void m4_3(); //  4.3 Using���� ��ȣ��
	void m4_4(); //  4.4 auto Ű����� �ڷ��� �߷�
	void m4_5(); //  4.5 ����ȯ Type conversion
	void m4_6(); //  4.6 ���ڿ� std string �Ұ�
	void m4_7(); //  4.7 ������ enumerated types
	void m4_8_1(); //  4.8 ���� ���� ������ (������ Ŭ����)
	void m4_9(); //  4.9 �ڷ������� ���� �ٿ��ֱ�
	void m4_10(); // 4.10 ����ü struct
};
class Projects_5
{
public:
	void m5_1();	// 5.1 ���� �帧 ���� Control flow
	void m5_2();	// 5.2 ���ǹ� if
	void m5_3();	// 5.3 switch-case
	void m5_4();	// 5.4 goto
	void m5_5();	// 5.5 �ݺ��� while
	void m5_6();	// 5.6 �ݺ��� do-while
	void m5_7();	// 5.7 �ݺ��� for
	void m5_8();	// 5.8 break, continue
	void m5_9();	// 5.9 ���� ����� random numbers
	void m5_10();	// 5.10 std::cin �� �� ����

};
class Projects_6
{
public:
	void m6_1();	// 6.1 �迭 ���� [1 of 2] array
	void m6_2();	// 6.2 �迭 ���� [2 of 2] array
	void m6_3();	// 6.3 �迭�� �ݺ���
	void m6_4();	// 6.4 �迭�� ���� ���� selection sort
	void m6_5();	// 6.5 ���� ������ �迭
	void m6_6();	// 6.6 C��� ��Ÿ���� �迭 ���ڿ�
	void m6_7();	// 6.7 �������� �⺻���� ����
	void m6_7_a();	// 6.7a �� ������ Null Pointer
	void m6_8();	// 6.8 �����Ϳ� ���� �迭
	void m6_9();	// 6.9 ������ ����� �迭 �ε���
	void m6_10();	// 6.10 C��� ��Ÿ���� ���ڿ� �ɺ��� ���
	void m6_11();	// 6.11 �޸� ���� �Ҵ� new�� delete
	void m6_12();	// 6.12 ���� �Ҵ� �迭
	void m6_13();	// 6.13 �����Ϳ� const
	void m6_14();	// 6.14 ���� ���� reference variable
	void m6_15();	// 6.15 ������ const
	void m6_16();	// 6.16 �����Ϳ� ������ ��� ����
	void m6_17();	// 6.17 C++11 For-each �ݺ���
	void m6_18();	// 6.18 ���̵� ������
	void m6_19();	// 6.19 ���� �����Ϳ� ���� ������ �迭
	void m6_20();	// 6.20 std::array �Ұ�
	void m6_21();	// 6.21 std::vector �Ұ�
};
class Projects_7
{
public:
	void m7_1();	// 7.1 �Ű������� �������� ����
	void m7_2();	// 7.2 ���� ���� ����
	void m7_3();	// 7.3 ������ ���� �μ� ����
	void m7_4();	// 7.4 �ּҿ� ���� �μ� ����
	void m7_5();	// 7.5 �پ��� ��ȯ ����(��, ����, �ּ�, ����ü, Ʃ��)
	void m7_6();	// 7.6 �ζ��� �Լ�
	void m7_7();	// 7.7 �Լ� �����ε�
	void m7_8();	// 7.8 �Ű������� �⺻��
	void m7_9();	// 7.9 �Լ� ������
	void m7_10();	// 7.10 ���ð� �� the stack and the heap
	void m7_11();	// 7.11 std vector�� ����ó�� ����ϱ�
	void m7_12();	// 7.12 ����� �Լ� ȣ��
	void m7_13();	// 7.13 ����� ���α׷����� ����
	void m7_14();	// 7.14 �ܾ��ϱ� assert
	void m7_15();	// 7.15 ����� �μ� command line arguments
	void m7_16();	// 7.16 ������ȣ Ellipsis
};
class Projects_8
{
public:
	void m8_1();	// 8.1 ��ü���� ���α׷��ְ� Ŭ����
	void m8_2();	// 8.2 ĸ��ȭ, ���� ������, ���� �Լ�
	void m8_3();	// 8.3 ������ Constructors
	void m8_4();	// 8.4 ������ ��� �ʱ�ȭ ���
	void m8_5();	// 8.5 ���� ������
	void m8_6();	// 8.6 �Ҹ��� destructor
	void m8_7();	// 8.7 this �����Ϳ� ���� ȣ��
	void m8_8();	// 8.8 Ŭ���� �ڵ�� ��� ����
	void m8_9();	// 8.9 Ŭ������ const
	void m8_10();	// 8.10 ���� ��� ����
	void m8_11();	// 8.11 ���� ��� �Լ�
	void m8_12();	// 8.12 ģ�� �Լ��� Ŭ���� friend
	void m8_13();	// 8.13 �͸� ��ü
	void m8_14();	// 8.14 Ŭ���� �ȿ� ���Ե� �ڷ��� nested types
	void m8_15();	// 8.15 ���� �ð� �����ϱ�
};
class Projects_9
{
public:
	void m9_1();	// 9.1 ��� ������ �����ε� �ϱ�
	void m9_2();	// 9.2 ����� ������ �����ε� �ϱ�
	void m9_3();	// 9.3 ���� ������ �����ε� �ϱ�
	void m9_4();	// 9.4 �� ������ �����ε� �ϱ�
	void m9_5();	// 9.5 ���� ������ �����ε� �ϱ�
	void m9_6();	// 9.6 ÷�� ������ �����ε� �ϱ�
	void m9_7();	// 9.7 ��ȣ ������ �����ε��� �Լ� ��ü
	void m9_8();	// 9.8 ����ȯ�� �����ε� �ϱ�
	void m9_9();	// 9.9 ���� ������, ���� �ʱ�ȭ ��ȯ�� ����ȭ
	void m9_10();	// 9.10 ��ȯ ������, explicit, delete
	void m9_11();	// 9.11 ���� ������ �����ε�, ���� ����, ���� ����
	void m9_12();	// 9.12 �̴ϼȶ����� ����Ʈ initializer list
};
class Projects_10
{
public:
	void m10_1();	// 10.1 ��ü���� ����
	void m10_2();	// 10.2 ��������
	void m10_3();	// 10.3 ���հ���
	void m10_4();	// 10.4 ���ް���
	void m10_5();	// 10.5 ��������
	void m10_6();	// 10.6 �����̳� Ŭ����
};
class Projects_11
{
public:
	void m11_1();	// 11.1 ����� �⺻ (1)
	void m11_2();	// 11.2 ����� �⺻ (2)
	void m11_3();	// 11.3 ������ Ŭ�������� ���� ����
	void m11_4();	// 11.4 ������ Ŭ�������� ������ �ʱ�ȭ
	void m11_5();	// 11.5 ��Ӱ� ���� ������
	void m11_6();	// 11.6 ������ Ŭ������ ���ο� ��� �߰��ϱ�
	void m11_7();	// 11.7 ��ӹ��� �Լ��� �������̵� �ϱ�
	void m11_8();	// 11.8 ��� ���� �Լ��� ���߱�
	void m11_9();	// 11.9 ���� ���
};
class Projects_12
{
public:
	void m12_1();	// 12.1 �������� �⺻ ����
	void m12_2();	// 12.2 ���� �Լ��� ������
	void m12_3();	// 12.3 override, final, ���� ��ȯ��
	void m12_4();	// 12.4 ���� �Ҹ���
	void m12_5();	// 12.5 ���� ���ε��� ���� ���ε�
	void m12_6();	// 12.6 ���� (�Լ�) ǥ
	void m12_7();	// 12.7 ���� ���� �Լ�, �߻� �⺻ Ŭ����, �������̽� Ŭ����
	void m12_8();	// 12.8 ���� �⺻ Ŭ������ ���̾Ƹ�� ��� ����
	void m12_9();	// 12.9 ��ü �߸��� reference wrapper
	void m12_10();	// 12.10 ���� ����ȯ
	void m12_11();	// 12.11 ���� Ŭ�������� ��� ������ ����ϱ�
};
class Projects_13
{
public:
	void m13_1();	// 13.1 �Լ� ���ø�
	void m13_2();	// 13.2 Ŭ���� ���ø�
	void m13_3();	// 13.3 �ڷ����� �ƴ� ���ø� �Ű�����
	void m13_4();	// 13.4 �Լ� ���ø� Ư��ȭ
	void m13_5();	// 13.5 Ŭ���� ���ø� Ư��ȭ
	void m13_6();	// 13.6 ���ø��� �κ������� Ư��ȭ�ϱ�
	void m13_7();	// 13.7 �����Ϳ� ���� ���ø� Ư��ȭ
	void m13_8();	// 13.8 ��� �Լ��� �� �� �� ���ø�ȭ �ϱ�
};
class Projects_14
{
public:
	void m14_1();	// 14.1 ����ó���� �⺻
	void m14_2();	// 14.2 ����ó���� ���� �ǰ���
	void m14_3();	// 14.3 ���� Ŭ������ ���
	void m14_4();	// 14.4 exception �Ұ�
	void m14_5();	// 14.5 �Լ� try
	void m14_6();	// 14.6 ����ó���� ���輺�� ����
};
class Projects_15
{
public:
	void m15_1();	// 15.1 �̵��� �ǹ̿� ����Ʈ ������
	void m15_2();	// 15.2 ������-�� ����
	void m15_3();	// 15.3 �̵� �����ڿ� �̵� ����
	void m15_4();	// 15.4 std::move
	void m15_5();	// 15.5 std::unique_ptr
	void m15_6();	// 15.6 std::shared_ptr
	void m15_7();	// 15.7 ��ȯ ������ ������ std::weak_ptr
};
class Projects_16
{
public:
	void m16_1();	// 16.1 ǥ�� ���ø� ���̺귯��, �����̳� �Ұ�
	void m16_2();	// 16.2 STL �ݺ��� �Ұ�
	void m16_3();	// 16.3 STL �˰��� �Ұ�
};
class Projects_17
{
public:
	void m17_1();	// 17.1 std::string�� std::wstring
	void m17_2();	// 17.2 std::string�� �������� �����ڵ�� ����ȯ
	void m17_3();	// 17.3 std::string�� ���̿� �뷮
	void m17_4();	// 17.4 ���� �����ϱ�� �迭���� ��ȯ
	void m17_5();	// 17.5 string ����, ��ȯ, �����̱�, ����
};
class Projects_18
{
public:
	void m18_1();	// 18.1 istream���� �Է¹ޱ�
	void m18_2();	// 18.2 ostream���� ����ϱ�
	void m18_3();	// 18.3 ���ڿ� ��Ʈ��
	void m18_4();	// 18.4 �帧 ���¿� �Է� ��ȿ�� ����
	void m18_5();	// 18.5 ���� ǥ���� �Ұ�
	void m18_6();	// 18.6 �⺻���� ���� �����
	void m18_7();	// 18.7 ������ ���� ��ġ �����ϱ�
};