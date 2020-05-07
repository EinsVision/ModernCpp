#include "projects.h"
int g_i = 0; // 전역변수가 가장 먼저 memory에 자리를 잡는다. 
			 // 가장먼저 생겨서 가장 마지막에 사라지는 변수이다.

int second(int x)
{
	return 2 * x;
}

int first(int x)
{
	int y = 3;
	return second(x + y);
}

void initArray()
{
	int* ptr2 = new int[1000];
	// delete[] ptr2; 주소를 적어놓은 쪽지를 잃어버리는 경우가 된다.
	// 왜냐하면 initArray()가 종료되면 stack에 쌓여있던 initArray()와 
	// int* ptr2가 없어져 버리기 때문이다. 이 경우, delete[] ptr2; 를 하지 않으면
	// 메모리 누수가 발생한다.
}
void Projects_7::m7_10() // main 함수가 stack 영역에 쌓인다.
{
	// 7.10 스택과 힙 the stack and the heap
	using namespace std;
	int a = 1, b;		 // int a, int b 변수가 stack 영역에 쌓인다.
	b = first(a);		 // 그 다음에 fisrt() 와 int x, int y 변수가 stack에 쌓인다.
	cout << b << endl;	 // 그 다음에 second() 와 int x 변수가 stack에 쌓인다.



	// stack의 장점은 빠르다. 하지만 단점은 size가 작다.
	// int array[10000000]; 이렇게 크게 정적 array를 선언하면 stack overflow가 발생한다.
	// 재귀호출해서 stack overflow가 발생할 수도 있다.

	int* ptr = nullptr;		// main 함수와 int* ptr은 stack 영역에 쌓인다.
	ptr = new int[100000];  // heap 영역에 data가 생긴다. 
	// 큰 data를 다룰 수 있는 공간이다. 메모리가 어디에 쌓일지 모르는 단점이 있다.
	delete[] ptr;			// heap에 있던 메모리를 OS에 반환한다.
	ptr = nullptr;			// 그래서 문제가 생기지 않도록 nullptr로 assignment한다.

	// 메모리 누수가 발생하는 경우!!
	initArray();
}
