#include "projects.h"

void printArray(const int my_array[], const int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << my_array[i] << " ";
	}
	cout << endl;
}

void swap(int my_array[], int smallestIndex, int startIndex)
{
	int temp = my_array[smallestIndex];
	my_array[smallestIndex] = my_array[startIndex];
	my_array[startIndex] = temp;
}

void Projects_6::m6_4()
{
	// 6.4 �迭�� ���� ���� selection sort
	/*			value	index
	3 5 2 1 4	  1  	  3	
	1 5 2 3 4	  2  	  2	
	1 2 5 3 4 	  3  	  0	
	1 2 3 5 4	  3  	  0	
	1 2 3 4 5 	  3  	  0	
	*/
	
	int my_arr[] = { 3, 5, 2, 1, 4, 9, 7, 6, 8 };
	int length = sizeof(my_arr) / sizeof(int);
	printArray(my_arr, length);
	// swap(my_arr, 0);
	// printArray(my_arr, length);

	// ������������ ���� 
	for (int startIndex = 0; startIndex < length - 1; startIndex++)
	{
		int smallestIndex = startIndex;
		for (int currenIndex = startIndex + 1; currenIndex < length; currenIndex++)
		{
			if (my_arr[smallestIndex] > my_arr[currenIndex]) // �ּ� �ε����� ã�´�.
				smallestIndex = currenIndex;
		}
		swap(my_arr, smallestIndex, startIndex);
		printArray(my_arr, length);
	}
	cout << endl;

	// ������������ ����
	for (int startIndex = 0; startIndex < length - 1; startIndex++)
	{
		int smallestIndex = startIndex;
		for (int currenIndex = startIndex + 1; currenIndex < length; currenIndex++)
		{
			if (my_arr[smallestIndex] < my_arr[currenIndex])
				smallestIndex = currenIndex;
		}
		swap(my_arr, smallestIndex, startIndex);
		printArray(my_arr, length);
	}
}
