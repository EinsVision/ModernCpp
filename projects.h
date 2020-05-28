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
#include <chrono> // 8.15 시간을 재는 파일이다.
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
#include <regex> // 정규 표현식 18.5
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
class MyArray133 // 이렇게 template parameter로 넣으면 compile time에
{				 // 결정된다.
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
class Projects_8
{
public:
	void m8_1();	// 8.1 객체지향 프로그래밍과 클래스
	void m8_2();	// 8.2 캡슐화, 접근 지정자, 접근 함수
	void m8_3();	// 8.3 생성자 Constructors
	void m8_4();	// 8.4 생성자 멤버 초기화 목록
	void m8_5();	// 8.5 위임 생성자
	void m8_6();	// 8.6 소멸자 destructor
	void m8_7();	// 8.7 this 포인터와 연쇄 호출
	void m8_8();	// 8.8 클래스 코드와 헤더 파일
	void m8_9();	// 8.9 클래스와 const
	void m8_10();	// 8.10 정적 멤버 변수
	void m8_11();	// 8.11 정적 멤버 함수
	void m8_12();	// 8.12 친구 함수와 클래스 friend
	void m8_13();	// 8.13 익명 객체
	void m8_14();	// 8.14 클래스 안에 포함된 자료형 nested types
	void m8_15();	// 8.15 실행 시간 측정하기
};
class Projects_9
{
public:
	void m9_1();	// 9.1 산술 연산자 오버로딩 하기
	void m9_2();	// 9.2 입출력 연산자 오버로딩 하기
	void m9_3();	// 9.3 단항 연산자 오버로딩 하기
	void m9_4();	// 9.4 비교 연산자 오버로딩 하기
	void m9_5();	// 9.5 증감 연산자 오버로딩 하기
	void m9_6();	// 9.6 첨자 연산자 오버로딩 하기
	void m9_7();	// 9.7 괄호 연산자 오버로딩과 함수 객체
	void m9_8();	// 9.8 형변환을 오버로딩 하기
	void m9_9();	// 9.9 복사 생성자, 복사 초기화 반환값 최적화
	void m9_10();	// 9.10 변환 생성자, explicit, delete
	void m9_11();	// 9.11 대입 연산자 오버로딩, 깊은 복사, 얕은 복사
	void m9_12();	// 9.12 이니셜라이져 리스트 initializer list
};
class Projects_10
{
public:
	void m10_1();	// 10.1 객체들의 관계
	void m10_2();	// 10.2 구성관계
	void m10_3();	// 10.3 집합관계
	void m10_4();	// 10.4 제휴관계
	void m10_5();	// 10.5 의존관계
	void m10_6();	// 10.6 컨테이너 클래스
};
class Projects_11
{
public:
	void m11_1();	// 11.1 상속의 기본 (1)
	void m11_2();	// 11.2 상속의 기본 (2)
	void m11_3();	// 11.3 유도된 클래스들의 생성 순서
	void m11_4();	// 11.4 유도된 클래스들의 생성과 초기화
	void m11_5();	// 11.5 상속과 접근 지정자
	void m11_6();	// 11.6 유도된 클래스에 새로운 기능 추가하기
	void m11_7();	// 11.7 상속받은 함수를 오버라이딩 하기
	void m11_8();	// 11.8 상속 받은 함수를 감추기
	void m11_9();	// 11.9 다중 상속
};
class Projects_12
{
public:
	void m12_1();	// 12.1 다형성의 기본 개념
	void m12_2();	// 12.2 가상 함수와 다형성
	void m12_3();	// 12.3 override, final, 공변 반환값
	void m12_4();	// 12.4 가상 소멸자
	void m12_5();	// 12.5 동적 바인딩과 정적 바인딩
	void m12_6();	// 12.6 가상 (함수) 표
	void m12_7();	// 12.7 순수 가상 함수, 추상 기본 클래스, 인터페이스 클래스
	void m12_8();	// 12.8 가상 기본 클래스와 다이아몬드 상속 문제
	void m12_9();	// 12.9 객체 잘림과 reference wrapper
	void m12_10();	// 12.10 동적 형변환
	void m12_11();	// 12.11 유도 클래스에서 출력 연산자 사용하기
};
class Projects_13
{
public:
	void m13_1();	// 13.1 함수 템플릿
	void m13_2();	// 13.2 클래스 템플릿
	void m13_3();	// 13.3 자료형이 아닌 템플릿 매개변수
	void m13_4();	// 13.4 함수 템플릿 특수화
	void m13_5();	// 13.5 클래스 템플릿 특수화
	void m13_6();	// 13.6 템플릿을 부분적으로 특수화하기
	void m13_7();	// 13.7 포인터에 대한 템플릿 특수화
	void m13_8();	// 13.8 멤버 함수를 한 번 더 템플릿화 하기
};
class Projects_14
{
public:
	void m14_1();	// 14.1 예외처리의 기본
	void m14_2();	// 14.2 예외처리와 스택 되감기
	void m14_3();	// 14.3 예외 클래스와 상속
	void m14_4();	// 14.4 exception 소개
	void m14_5();	// 14.5 함수 try
	void m14_6();	// 14.6 예외처리의 위험성과 단점
};
class Projects_15
{
public:
	void m15_1();	// 15.1 이동의 의미와 스마트 포인터
	void m15_2();	// 15.2 오른쪽-값 참조
	void m15_3();	// 15.3 이동 생성자와 이동 대입
	void m15_4();	// 15.4 std::move
	void m15_5();	// 15.5 std::unique_ptr
	void m15_6();	// 15.6 std::shared_ptr
	void m15_7();	// 15.7 순환 의존성 문제와 std::weak_ptr
};
class Projects_16
{
public:
	void m16_1();	// 16.1 표준 템플릿 라이브러리, 컨테이너 소개
	void m16_2();	// 16.2 STL 반복자 소개
	void m16_3();	// 16.3 STL 알고리즘 소개
};
class Projects_17
{
public:
	void m17_1();	// 17.1 std::string과 std::wstring
	void m17_2();	// 17.2 std::string의 여러가지 생성자들과 형변환
	void m17_3();	// 17.3 std::string의 길이와 용량
	void m17_4();	// 17.4 문자 접근하기와 배열로의 변환
	void m17_5();	// 17.5 string 대입, 교환, 덧붙이기, 삽입
};
class Projects_18
{
public:
	void m18_1();	// 18.1 istream으로 입력받기
	void m18_2();	// 18.2 ostream으로 출력하기
	void m18_3();	// 18.3 문자열 스트림
	void m18_4();	// 18.4 흐름 상태와 입력 유효성 검증
	void m18_5();	// 18.5 정규 표현식 소개
	void m18_6();	// 18.6 기본적인 파일 입출력
	void m18_7();	// 18.7 파일의 임의 위치 접근하기
};