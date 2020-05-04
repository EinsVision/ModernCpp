#include "projects.h"

void Projects_6::m6_6()
{
	// 6.6 C언어 스타일의 배열 문자열
	char myString[] = "Hello World! "; // 마지막에 NULL char가 있다.

	for (int i = 0; i < 14; i++)
	{
		cout << (int)myString[i] << " ";
	}
	
	//cin >> myString; // 이렇게 사용하면 띄어쓰기에 대응하지 못한다.
	cin.getline(myString, 255); // 빈칸도 대응해서 출력한다.
	// myString[4] = '\0'; // 중간에 출력을 중단한다.
	
	cout << myString << endl;

	int idx = 0;
	while (true)  // 이 예제에서 알 수 있는 것은 \0 과 space 가 다르다는 것이다.
	{
		if (myString[idx] == '\0')
		{
			cout << myString[idx] << "  " << (int)myString[idx] << endl;
			break;
		}
		cout << myString[idx] << "  " << (int)myString[idx] << endl;
		idx++;
	}
	cout << endl;

	// strcpy_s() 함수 사용의 예!
	char source[] = "Copy This!!";
	char dest[50];
	strcpy_s(dest, 50, source);
	cout << source << endl;
	cout << dest << endl;
	cout << endl;

	// strcat() 함수 사용의 예! (문자에 다른 문자를 붙여주는 함수이다.)
	strcat_s(dest, source);
	cout << "strcat(): " << dest << endl;

	// strcmp() 함수 (두 문자가 같은지 비교해 보는 함수이다.)
	// if (!strcmp(dest, source)) // 같으면 0을 return 한다. 다르면 -1을 return 한다.
	if (strcmp(dest, source) == 0 )
	{
		cout << " The sentences are same as follow : " << dest << "   " << source << endl;
	}
	else
	{
		cout << " The sentences aren't same as follow : " << dest << "   " << source << endl;
	}
}
