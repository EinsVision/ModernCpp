#include "projects.h"

void printStates(const ios& stream)
{
    cout << boolalpha;
    cout << "stream.good() : "<<stream.good() << endl;
    cout << "stream.eof(): "<<stream.eof() << endl;
    cout << "stream.fail(): "<<stream.fail() << endl;
    cout << "stream.bad() : "<<stream.bad() << endl;
}

void printStatesCharcter(const int& i)
{
    cout << boolalpha;
    cout << "isalnum(): " << bool(isalnum(i)) << endl;
    cout << "isblank(): " << bool(isblank(i)) << endl;
    cout << "isdigit(): " << bool(isdigit(i)) << endl;
    cout << "islower(): " << bool(islower(i)) << endl;
    cout << "isupper(): " << bool(isupper(i)) << endl;
}

bool isAlldigit(const string& str)
{
    bool ok_flag = true;

    for (auto e : str)
    {
        if (!isdigit(e))
        {
            ok_flag = false;
            break;
        }
    }
    return ok_flag;
}

void Projects_18::m18_4()
{
    // 18.4 흐름 상태와 입력 유효성 검증
    char i;
    cin >> i;

    printStates(cin);

    cout << boolalpha;
    cout << bitset<8>(cin.rdstate()) << endl;
    cout << bitset<8>(istream::goodbit) << endl;
    cout << bitset<8>(istream::failbit) << endl;

    printStatesCharcter(i);

    cout << boolalpha;
    cout << isAlldigit("1234") << endl;
    cout << isAlldigit("a1234") << endl;
}