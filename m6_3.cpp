#include "projects.h"

void Projects_6::m6_3()
{
	// 6.3 배열과 반복문, max min 구하기
	// const int num_students = 5; // 이거대신 다른 것을 사용할 수 있다.
	
	int scores[] = { 100,56,50,100,22,102,101 };
	int num_students = sizeof(scores) / sizeof(int);

	int total_score = 0;
	int max_score = 0;
	int min_score = scores[0];
	for (int i = 0; i < num_students; i++)
	{
		total_score += scores[i];
	}
	double avg = double(total_score) / num_students;

	cout << "avg score: " << avg << endl;
	cout << endl;

	// max score 구하기
	
	for (int i = 0; i < num_students; i++)
	{
		if (scores[i] > max_score)
		{
			max_score = scores[i];
		}
	}
	cout << "max score: " << max_score << endl;
	cout << endl;

	// min score 구하기

	for (int i = 0; i < num_students; i++)
	{
		if (scores[i] < min_score)
		{
			min_score = scores[i];
		}
	}
	cout << "min score: " << min_score << endl;
	cout << endl;
}
