#include "projects.h"

void printArray(int scores[]) // 매개변수 scores[20]는 배열이 아니고 포인터이다.
{   // array를 함수의 파라메터 (매개변수)로 넣어줄수 있다. 그러나, 
	// 매개변수가 배열의 모든 원소를 복사해서 가져오는 것이 아니라 
	// studuent_scores[]의 주소를 저장하는 포인터 변수가 넘어간다. 
	cout << endl;
	cout << "printArray address: " << &scores << endl;
	cout << "printArray sizeof: " << sizeof(scores) << endl;
	cout << &scores[0] << endl;
	cout << scores[1] << endl;
	cout << scores[2] << endl;
}

void Projects_6::m6_2()
{
	// 6.2 배열 기초 [2 of 2] array
	const int num_students = 20;
	int studuent_scores[num_students] = { 1,2,3,4,5,0 };
	
	cout << &studuent_scores << endl;
	cout << &studuent_scores[0] << endl;
	cout << &studuent_scores[1] << endl;
	cout << &studuent_scores[2] << endl;
	cout << &studuent_scores[3] << endl;
	cout <<"sizeof(studuent_scores): "<< sizeof(studuent_scores) << endl;
		
	printArray(studuent_scores);
	// 지금 문제는 studuent_scores[]의 array 주소가 printArray() 함수와 다르다는 것이다.
}
