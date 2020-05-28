#include "projects.h"

void Projects_18::m18_2()
{
    // 18.2 ostream으로 출력하기
    cout.setf(ios::showpos); // + 기호를 붙여서 출력한다.
    cout << 1032 << endl;
    cout.unsetf(ios::showpos);
    cout << 1033 << endl;    // + 기호를 해제한다.
    
    cout.unsetf(ios::dec); // 10진수 출력을 끈다.
    cout.setf(ios::hex); // 16진수 출력전에 10진수 출력을 off해야 한다.
    cout << 1034 << endl;

    // 16진수 출력
    cout.setf(ios::hex, ios::basefield);
    cout.setf(ios::uppercase); // 대문자로 출력을 한다.
    cout << std::hex;
    cout << 12 << endl;

    // 10진수 출력
    cout << dec;
    cout << 12 << endl;

    cout << boolalpha;
    cout << true << " " << false << endl;

    cout << fixed;
    cout << setprecision(3) << 123.456 << endl;
    cout << setprecision(4) << 123.456 << endl;
    cout << setprecision(5) << 123.456 << endl;
    cout << setprecision(6) << 123.456 << endl;
    cout << setprecision(7) << 123.456 << endl;

    cout << scientific<<uppercase;
    cout << setprecision(3) << 123.456 << endl;
    cout << setprecision(4) << 123.456 << endl;
    cout << setprecision(5) << 123.456 << endl;
    cout << setprecision(6) << 123.456 << endl;
    cout << setprecision(7) << 123.456 << endl;

    cout << showpoint;
    cout << setprecision(3) << 123.456 << endl;
    cout << setprecision(4) << 123.456 << endl;
    cout << setprecision(5) << 123.456 << endl;
    cout << setprecision(6) << 123.456 << endl;
    cout << setprecision(7) << 123.456 << endl;


    cout.fill('*');
    cout << setw(10) << -1233 << endl;
    cout << setw(10) << left << -1233 << endl;
    cout << setw(10) << right << -1233 << endl;
    cout << setw(10) << internal << -1233 << endl;
}