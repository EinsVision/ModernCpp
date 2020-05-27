#include "projects.h"

void sorting()
{
    char ch;
    while (cin.get(ch))
    {
        cout << ch; // 여기서 Hello World를 치면, 빈칸이 사라진다.
    }
}

void Projects_18::m18_1()
{
    // 18.1 istream으로 입력받기
    char buf[10]; // 항상 메모리 용량을 조심하며 입력할 수 없다.
    // cin >> buf;
    
    cin >> setw(5) >> buf; // set width 함수를 쓰면된다.
    // 최대 10 글자만 받도록 허용한다.
    cout << buf<<endl;

    cin >> setw(5) >> buf;
    cout << buf << endl; // 이게 가능한 것은 istream에 글자가 남아있어서

    cin >> setw(5) >> buf;
    cout << buf << endl; // 버퍼로 부터 순차적으로 가져오는 방식이다.

    // sorting();

    char ch[5];
    cin.get(ch, 5);     // 빈칸까지 받도록 한다.
    cout << cin.gcount() << " " << ch << endl;

    cin.get(ch, 5);
    cout << cin.gcount() << " " << ch << endl;

    char ch2[5];
    cin.getline(ch2, 5);// 한줄을 받고 버퍼를 비운다.
    cout << cin.gcount() << " " << ch2 << endl;

    cin.getline(ch, 5);
    cout << cin.gcount() << " " << ch2 << endl;

    /*string str;
    getline(cin, str);

    cout << cin.gcount() << " " << str << endl;*/

    cin.ignore();
    cin.peek();
    cin.unget(); // 마지막에 있는 것을 다시 버퍼에 넣는다.
    cin.putback('A');
}