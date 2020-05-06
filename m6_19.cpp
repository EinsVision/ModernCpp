#include "projects.h"

void Projects_6::m6_19()
{
	// 6.19 다중 포인터와 동적 다차원 배열
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
	cout << "**pptr: " << **pptr << endl;       // 같다
	cout << "*(*pptr): " << *(*pptr) << endl;   // 같다
	cout << endl;

	/////////////////////////////////////////////////// case 1
	// 2차원 행렬을 구현할 때 이중 포인터를 쓴다.
	const int row = 3;
	const int col = 5;
	const int twoDinseional_arr [row][col]
	{
		{1,2,3,4,5},		//1차원 array가 1개있다.
		{6,7,8,9,10},		//1차원 array가 2개있다.
		{11,12,13,14,15}	//1차원 array가 3개있다.
	};

	int* r1 = new int[col] {1, 2, 3, 4, 5};
	cout << "r1 address: " << r1 << endl;
	cout << "new를 사용하면 반환값이 주소값이다. 이 주소 값을 받아오는 곳은 힙 메모리 영역에서 받아오게 됩니다." << endl;

	int* r2 = new int[col] {6, 7, 8, 9, 10};
	cout << "r2 address: " << r2 << endl;
	cout << "new를 사용하면 반환값이 주소값이다. 이 주소 값을 받아오는 곳은 힙 메모리 영역에서 받아오게 됩니다." << endl;

	int* r3 = new int[col] {11, 12, 13, 14, 15};
	cout << "r3 address: " << r3 << endl;
	cout << "new를 사용하면 반환값이 주소값이다. 이 주소 값을 받아오는 곳은 힙 메모리 영역에서 받아오게 됩니다." << endl;

	cout << endl;

	// int pointer array를 만든다.
	// row 갯수만큼 rN이 나올수 있다. 그래서 r1, r2, r3 ... 를 쓸 수 있는 int pointer array를 만든다.
	// int pointer array를 만들 때는 이중포인터를 써서 만든다.
	int** rows = new int* [row] {r1, r2, r3};
	cout << "rows address: " << rows << endl;
	cout << "int pointer array를 만들 때는 이중포인터를 써서 만든다." << endl;
	cout << endl;

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << rows[r][c] << " ";
		}
		cout << endl;
	}

	// delete도 해주어야 한다.
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
		cout << "matrix[0], matrix[1], matrix[2] 모두 같은 주소" << endl;
	}

	// matrix에 값을 대입한다.
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			matrix[r][c] = twoDinseional_arr[r][c];
		}
		cout << endl;
	}

	// matrix의 값을 출력한다.
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}
	cout << "Matrix의 값이 모두 출력되었다." << endl;

	// delete
	for (int r = 0; r < row; ++r)
	{
		delete[] matrix[r];
	}

	/////////////////////////////////////////////////// case 3
	// 이중포인터를 사용하지 않는 경우도 있다. 
	// 1차원 array가 2차원 array인 것 처럼 구부려서 사용한다.
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
	cout << "one_matrix의 값이 모두 출력되었다." << endl;

	delete[] one_matrix;
}
