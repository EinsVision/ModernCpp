#pragma once
#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <bitset>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib> // random number generate
#include <ctime>
#include <random>
#include <array>
#include <algorithm>

using namespace std;

namespace cnst_m2_9
{
	const double pi( 3.141592 );
	const double avogadro(6.034e23);
	const double moon_gravity(9.8 / 6.0);
}


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