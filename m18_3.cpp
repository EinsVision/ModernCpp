#include "projects.h"

void Projects_18::m18_3()
{
    // 18.3 ���ڿ� ��Ʈ��
    stringstream os;
    string str1; // >> data�� �̾� ���� opertor
    
    // case 1.
    os << "Hello world"; // << insertion operator (���ۿ� �״´�.)
    os << " by jcdlove"; // os ���ۿ� �����δ�.
    str1 = os.str(); // data�� �ִ´�.
    cout << str1 << endl;

    // case 2.
    // os.str()�� ���ۿ� �ش� ���ڷ� ��ü�ϴ� ���̴�.
    os.str("hello wolrd");
    str1 = os.str();
    cout << str1 << endl;

    // case 3.
    os << "1234.33 34";
    string str2;
    string str3;
    os >> str2 >> str3;
    cout << str2 << " ||||| " << str3 << endl;

    // case 4.
    // string�� ����
    // ���⼭ str() �� �Լ� �����ε��� �ǰ� �ִ�.
    os.str(""); // ��� ���ڿ��� �����.
    os.clear(); // state���� �����.
    cout << os.str() << endl;
}