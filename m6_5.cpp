#include "projects.h"

void Projects_6::m6_5()
{
	// 6.5 ���� ������ �迭 multi-dimentional array
	const int num_rows = 3;
	const int num_columns = 5;
	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_columns; col++)
		{
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		}
		cout << endl;
	}

	int my_arr[][num_columns] =
	{
		{1,2,3,4,5},
		{7,8,9,10,11},
		{12,13,14,15,16}
	};

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_columns; col++)
		{
			cout << my_arr[row][col] << '\t'<< &my_arr[row][col]<<'\t';
		}
		cout << endl;
	}
	// 2���� �迭�� ���������δ� 1���� �迭�̴�.
}
