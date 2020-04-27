#pragma once
#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <bitset>
using namespace std;

namespace cnst_m2_9
{
	constexpr double pi( 3.141592 );
	constexpr double avogadro(6.034e23);
	constexpr double moon_gravity(9.8 / 6.0);
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
	void m4_8(); //  4.8 영역 제한 열거형 (열거형 클래스)
	void m4_9(); //  4.9 자료형에게 가명 붙여주기
	void m4_10(); // 4.10 구조체 struct
};