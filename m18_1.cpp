#include "projects.h"

void sorting()
{
    char ch;
    while (cin.get(ch))
    {
        cout << ch; // ���⼭ Hello World�� ġ��, ��ĭ�� �������.
    }
}

void Projects_18::m18_1()
{
    // 18.1 istream���� �Է¹ޱ�
    char buf[10]; // �׻� �޸� �뷮�� �����ϸ� �Է��� �� ����.
    // cin >> buf;
    
    cin >> setw(5) >> buf; // set width �Լ��� ����ȴ�.
    // �ִ� 10 ���ڸ� �޵��� ����Ѵ�.
    cout << buf<<endl;

    cin >> setw(5) >> buf;
    cout << buf << endl; // �̰� ������ ���� istream�� ���ڰ� �����־

    cin >> setw(5) >> buf;
    cout << buf << endl; // ���۷� ���� ���������� �������� ����̴�.

    // sorting();

    char ch[5];
    cin.get(ch, 5);     // ��ĭ���� �޵��� �Ѵ�.
    cout << cin.gcount() << " " << ch << endl;

    cin.get(ch, 5);
    cout << cin.gcount() << " " << ch << endl;

    char ch2[5];
    cin.getline(ch2, 5);// ������ �ް� ���۸� ����.
    cout << cin.gcount() << " " << ch2 << endl;

    cin.getline(ch, 5);
    cout << cin.gcount() << " " << ch2 << endl;

    /*string str;
    getline(cin, str);

    cout << cin.gcount() << " " << str << endl;*/

    cin.ignore();
    cin.peek();
    cin.unget(); // �������� �ִ� ���� �ٽ� ���ۿ� �ִ´�.
    cin.putback('A');
}