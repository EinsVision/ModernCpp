#include "projects.h"

struct Rectangle
{
	int length;
	int width;
};

enum StructName
{
	JACKJACK,
	DASH,
	VIOLET,
	NUM_STUDENT,
};

void Projects_6::m6_1()
{
	// 6.1 �迭 ���� [1 of 2] array
	/*int jackjack_score;
	int dash_score;
	int violet_score;*/ // �̷��� �޸𸮸� �Ҵ��ϴ� ���� ��ȿ�����̴�.
	int student_scores[5];

	cout <<"data size: "<< sizeof(student_scores) << endl;
	student_scores[0] = 100;
	student_scores[1] = 91;
	student_scores[2] = 35;
	student_scores[3] = 72;
	student_scores[4] = 59;
	//student_scores[5] = 59;

	for (int i = 0; i < 5; i++)
	{
		cout << student_scores[i] << endl;
	}
	cout << endl;

	double avg = 0.0;
	for (int i = 0; i < 5; i++)
	{
		avg += (double)student_scores[i];
	}
	cout << "avg: "<<avg / 5 << endl;
	cout << endl;

	// Rectangle structor ���캸��.
	cout << "Rectangle structor: " << sizeof(Rectangle) << endl;

	Rectangle rec[10];
	cout << "Rectangle structor all: "<<sizeof(rec) << endl;
	
	// structor�� �Ҵ��� array�� �ʱ�ȭ�ϴ� ���
	rec[0].width = 50;
	rec[0].length = 20;
	rec[1].width = 30; // �̷��� �ʱ�ȭ �ؾ��Ѵ�.
	cout << endl;
	
	int my_arr[]{ 1,2,3,4,5 }; // �̹��� ���Ӱ� Array �Ҵ� C++11

	for (int i = 0; i < 5; i++)
	{
		cout << "Array in C++11: "<<my_arr[i] << endl;
	}
	cout << endl;

	my_arr[JACKJACK] = 7;
	cout << my_arr[JACKJACK] << endl;

	int new_my_arr[NUM_STUDENT];
	new_my_arr[JACKJACK] = 7;
	new_my_arr[DASH] = 7;
	new_my_arr[VIOLET] = 7;

	for (int i = 0; i < NUM_STUDENT; i++)
	{
		cout << "Enum Array in C++11: " << new_my_arr[i] << endl;
	}
	cout << endl;

	// ARRAY�� ũ��� Runtime�� ������ �� ����. 
	const int num_student = 5;
	// cin >> num_student;
	int stdudent_size[num_student];
}
