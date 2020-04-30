#include "projects.h"

void printArray(int scores[]) // �Ű����� scores[20]�� �迭�� �ƴϰ� �������̴�.
{   // array�� �Լ��� �Ķ���� (�Ű�����)�� �־��ټ� �ִ�. �׷���, 
	// �Ű������� �迭�� ��� ���Ҹ� �����ؼ� �������� ���� �ƴ϶� 
	// studuent_scores[]�� �ּҸ� �����ϴ� ������ ������ �Ѿ��. 
	cout << endl;
	cout << "printArray address: " << &scores << endl;
	cout << "printArray sizeof: " << sizeof(scores) << endl;
	cout << &scores[0] << endl;
	cout << scores[1] << endl;
	cout << scores[2] << endl;
}

void Projects_6::m6_2()
{
	// 6.2 �迭 ���� [2 of 2] array
	const int num_students = 20;
	int studuent_scores[num_students] = { 1,2,3,4,5,0 };
	
	cout << &studuent_scores << endl;
	cout << &studuent_scores[0] << endl;
	cout << &studuent_scores[1] << endl;
	cout << &studuent_scores[2] << endl;
	cout << &studuent_scores[3] << endl;
	cout <<"sizeof(studuent_scores): "<< sizeof(studuent_scores) << endl;
		
	printArray(studuent_scores);
	// ���� ������ studuent_scores[]�� array �ּҰ� printArray() �Լ��� �ٸ��ٴ� ���̴�.
}
