#include "projects.h"

void Projects_6::m6_6()
{
	// 6.6 C��� ��Ÿ���� �迭 ���ڿ�
	char myString[] = "Hello World! "; // �������� NULL char�� �ִ�.

	for (int i = 0; i < 14; i++)
	{
		cout << (int)myString[i] << " ";
	}
	
	//cin >> myString; // �̷��� ����ϸ� ���⿡ �������� ���Ѵ�.
	cin.getline(myString, 255); // ��ĭ�� �����ؼ� ����Ѵ�.
	// myString[4] = '\0'; // �߰��� ����� �ߴ��Ѵ�.
	
	cout << myString << endl;

	int idx = 0;
	while (true)  // �� �������� �� �� �ִ� ���� \0 �� space �� �ٸ��ٴ� ���̴�.
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

	// strcpy_s() �Լ� ����� ��!
	char source[] = "Copy This!!";
	char dest[50];
	strcpy_s(dest, 50, source);
	cout << source << endl;
	cout << dest << endl;
	cout << endl;

	// strcat() �Լ� ����� ��! (���ڿ� �ٸ� ���ڸ� �ٿ��ִ� �Լ��̴�.)
	strcat_s(dest, source);
	cout << "strcat(): " << dest << endl;

	// strcmp() �Լ� (�� ���ڰ� ������ ���� ���� �Լ��̴�.)
	// if (!strcmp(dest, source)) // ������ 0�� return �Ѵ�. �ٸ��� -1�� return �Ѵ�.
	if (strcmp(dest, source) == 0 )
	{
		cout << " The sentences are same as follow : " << dest << "   " << source << endl;
	}
	else
	{
		cout << " The sentences aren't same as follow : " << dest << "   " << source << endl;
	}
}
