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
	void m2_1(); // 2.1 기본 자료형 소개
	void m2_2(); // 2.2 정수형 (Integers)
	void m2_3(); // 2.3 C++ 11 고정 너비 정수 (Fixed-width Integers)
	void m2_4(); // 2.4 무치형 (보이드, Void)
	void m2_5(); // 2.5 부동소수점수 floating point numbers
	void m2_6(); // 2.6 불리언 자료형과 조건문 if
	void m2_7(); // 2.7 문자형 char type
	void m2_8(); // 2.8 리터럴 상수 literal constants
	void m2_9(); // 2.9 심볼릭 상수 symbolic constants
};
class Projects_3
{
public:
	void m3_1(); // 3.1 연산자 우선순위와 결합 법칙
	void m3_2(); // 3.2 산술 연산자 arithmetic operators
	void m3_3(); // 3.3 증감 연산자 increment decrement operators
	void m3_4(); // 3.4 sizeof, 쉼표 연산자, 조건부 연산자
	void m3_5(); // 3.5 관계 연산자 Relational Operators
	void m3_6(); // 3.6 논리 연산자 logical operators
	void m3_7(); // 3.7 이진수 Binary Numbers
	void m3_8(); // 3.8 비트단위 연산자 Bitwise Operators
	void m3_9(); // 3.9 비트 플래그, 비트 마스크 사용법 Bit flags, Bit masks
};
class Projects_4
{
public:
	void m4_1(); //  4.1 지역 변수, 범위, 지속기간
	void m4_2(); //  4.2 전역 변수, 정적 변수, 내부 연결, 외부 연결
	void m4_3(); //  4.3 Using문과 모호성
	void m4_4(); //  4.4 auto 키워드와 자료형 추론
	void m4_5(); //  4.5 형변환 Type conversion
	void m4_6(); //  4.6 문자열 std string 소개
	void m4_7(); //  4.7 열거형 enumerated types
	void m4_8_1(); //  4.8 영역 제한 열거형 (열거형 클래스)
	void m4_9(); //  4.9 자료형에게 가명 붙여주기
	void m4_10(); // 4.10 구조체 struct
};
class Projects_5
{
public:
	void m5_1();	// 5.1 제어 흐름 개요 Control flow
	void m5_2();	// 5.2 조건문 if
	void m5_3();	// 5.3 switch-case
	void m5_4();	// 5.4 goto
	void m5_5();	// 5.5 반복문 while
	void m5_6();	// 5.6 반복문 do-while
	void m5_7();	// 5.7 반복문 for
	void m5_8();	// 5.8 break, continue
	void m5_9();	// 5.9 난수 만들기 random numbers
	void m5_10();	// 5.10 std::cin 더 잘 쓰기

};
class Projects_6
{
public:
	void m6_1();	// 6.1 배열 기초 [1 of 2] array
	void m6_2();	// 6.2 배열 기초 [2 of 2] array
	void m6_3();	// 6.3 배열과 반복문
	void m6_4();	// 6.4 배열과 선택 정렬 selection sort
	void m6_5();	// 6.5 정적 다차원 배열
	void m6_6();	// 6.6 C언어 스타일의 배열 문자열
	void m6_7();	// 6.7 포인터의 기본적인 사용법
	void m6_7_a();	// 6.7a 널 포인터 Null Pointer
	void m6_8();	// 6.8 포인터와 정적 배열
	void m6_9();	// 6.9 포인터 연산과 배열 인덱싱
	void m6_10();	// 6.10 C언어 스타일의 문자열 심볼릭 상수
	void m6_11();	// 6.11 메모리 동적 할당 new와 delete
	void m6_12();	// 6.12 동적 할당 배열
	void m6_13();	// 6.13 포인터와 const
	void m6_14();	// 6.14 참조 변수 reference variable
	void m6_15();	// 6.15 참조와 const
	void m6_16();	// 6.16 포인터와 참조의 멤버 선택
	void m6_17();	// 6.17 C++11 For-each 반복문
	void m6_18();	// 6.18 보이드 포인터
	void m6_19();	// 6.19 다중 포인터와 동적 다차원 배열
	void m6_20();	// 6.20 std::array 소개
	void m6_21();	// 6.21 std::vector 소개
};
class Projects_7
{
public:
	void m7_1();	// 7.1 매개변수와 실인자의 구분
	void m7_2();	// 7.2 값에 의한 전달
	void m7_3();	// 7.3 참조에 의한 인수 전달
	void m7_4();	// 7.4 주소에 의한 인수 전달
	void m7_5();	// 7.5 다양한 반환 값들(값, 참조, 주소, 구조체, 튜플)
	void m7_6();	// 7.6 인라인 함수
	void m7_7();	// 7.7 함수 오버로딩
	void m7_8();	// 7.8 매개변수의 기본값
	void m7_9();	// 7.9 함수 포인터
	void m7_10();	// 7.10 스택과 힙 the stack and the heap
	void m7_11();	// 7.11 std vector를 스택처럼 사용하기
	void m7_12();	// 7.12 재귀적 함수 호출
	void m7_13();	// 7.13 방어적 프로그래밍의 개념
	void m7_14();	// 7.14 단언하기 assert
	void m7_15();	// 7.15 명령줄 인수 command line arguments
	void m7_16();	// 7.16 생략부호 Ellipsis
};