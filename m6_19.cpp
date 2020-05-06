#include "projects.h"

void Projects_6::m6_19()
{
	// 6.19 ���� �����Ϳ� ���� ������ �迭
	int* ptr = nullptr;
	int** pptr = nullptr; 
	int value = 5;

	ptr = &value;
	pptr = &ptr;

	cout << "value: " << &value << endl;
	cout << "ptr: " << ptr << endl;
	cout << "*ptr: " << *ptr << endl;
	cout << "&ptr: " << &ptr << endl;
	cout << "pptr: " << pptr << endl;
	cout << "*pptr: " << *pptr << endl;
	cout << "&pptr: " << &pptr << endl;
	cout << "**pptr: " << **pptr << endl;       // ����
	cout << "*(*pptr): " << *(*pptr) << endl;   // ����
	cout << endl;

	/////////////////////////////////////////////////// case 1
	// 2���� ����� ������ �� ���� �����͸� ����.
	const int row = 3;
	const int col = 5;
	const int twoDinseional_arr [row][col]
	{
		{1,2,3,4,5},		//1���� array�� 1���ִ�.
		{6,7,8,9,10},		//1���� array�� 2���ִ�.
		{11,12,13,14,15}	//1���� array�� 3���ִ�.
	};

	int* r1 = new int[col] {1, 2, 3, 4, 5};
	cout << "r1 address: " << r1 << endl;
	cout << "new�� ����ϸ� ��ȯ���� �ּҰ��̴�. �� �ּ� ���� �޾ƿ��� ���� �� �޸� �������� �޾ƿ��� �˴ϴ�." << endl;

	int* r2 = new int[col] {6, 7, 8, 9, 10};
	cout << "r2 address: " << r2 << endl;
	cout << "new�� ����ϸ� ��ȯ���� �ּҰ��̴�. �� �ּ� ���� �޾ƿ��� ���� �� �޸� �������� �޾ƿ��� �˴ϴ�." << endl;

	int* r3 = new int[col] {11, 12, 13, 14, 15};
	cout << "r3 address: " << r3 << endl;
	cout << "new�� ����ϸ� ��ȯ���� �ּҰ��̴�. �� �ּ� ���� �޾ƿ��� ���� �� �޸� �������� �޾ƿ��� �˴ϴ�." << endl;

	cout << endl;

	// int pointer array�� �����.
	// row ������ŭ rN�� ���ü� �ִ�. �׷��� r1, r2, r3 ... �� �� �� �ִ� int pointer array�� �����.
	// int pointer array�� ���� ���� ���������͸� �Ἥ �����.
	int** rows = new int* [row] {r1, r2, r3};
	cout << "rows address: " << rows << endl;
	cout << "int pointer array�� ���� ���� ���������͸� �Ἥ �����." << endl;
	cout << endl;

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << rows[r][c] << " ";
		}
		cout << endl;
	}

	// delete�� ���־�� �Ѵ�.
	delete[] r1;
	delete[] r2;
	delete[] r3;
	delete[] rows;

	/////////////////////////////////////////////////// case 2

	int** matrix = new int* [row];

	for (int r = 0; r < row; ++r)
	{
		matrix[r] = new int[col];
		cout << "matrix[" << r << "]" << " : " << matrix << endl;
		cout << "matrix[0], matrix[1], matrix[2] ��� ���� �ּ�" << endl;
	}

	// matrix�� ���� �����Ѵ�.
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			matrix[r][c] = twoDinseional_arr[r][c];
		}
		cout << endl;
	}

	// matrix�� ���� ����Ѵ�.
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}
	cout << "Matrix�� ���� ��� ��µǾ���." << endl;

	// delete
	for (int r = 0; r < row; ++r)
	{
		delete[] matrix[r];
	}

	/////////////////////////////////////////////////// case 3
	// ���������͸� ������� �ʴ� ��쵵 �ִ�. 
	// 1���� array�� 2���� array�� �� ó�� ���η��� ����Ѵ�.
	int* one_matrix = new int[row * col];
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			one_matrix[c + col * r] = twoDinseional_arr[r][c];
		} // r0 c0, r0 c1, r0 c2, r0 c3, r0 c4
		  // r1 c0, r1 c1, r1 c2, r1 c3, r1 c4
		  // r2 c0, r2 c1, r2 c2, r2 c3, r2 c4
		cout << endl;
	}

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << one_matrix[c + col * r] << " ";
		}
		cout << endl;
	}
	cout << "one_matrix�� ���� ��� ��µǾ���." << endl;

	delete[] one_matrix;
}
