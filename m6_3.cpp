#include "projects.h"

void Projects_6::m6_3()
{
	// 6.3 �迭�� �ݺ���, max min ���ϱ�
	// const int num_students = 5; // �̰Ŵ�� �ٸ� ���� ����� �� �ִ�.
	
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

	// max score ���ϱ�
	
	for (int i = 0; i < num_students; i++)
	{
		if (scores[i] > max_score)
		{
			max_score = scores[i];
		}
	}
	cout << "max score: " << max_score << endl;
	cout << endl;

	// min score ���ϱ�

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
