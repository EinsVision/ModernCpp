#include "projects.h"

void Projects_18::m18_2()
{
    // 18.2 ostream���� ����ϱ�
    cout.setf(ios::showpos); // + ��ȣ�� �ٿ��� ����Ѵ�.
    cout << 1032 << endl;
    cout.unsetf(ios::showpos);
    cout << 1033 << endl;    // + ��ȣ�� �����Ѵ�.
    
    cout.unsetf(ios::dec); // 10���� ����� ����.
    cout.setf(ios::hex); // 16���� ������� 10���� ����� off�ؾ� �Ѵ�.
    cout << 1034 << endl;

    // 16���� ���
    cout.setf(ios::hex, ios::basefield);
    cout.setf(ios::uppercase); // �빮�ڷ� ����� �Ѵ�.
    cout << std::hex;
    cout << 12 << endl;

    // 10���� ���
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