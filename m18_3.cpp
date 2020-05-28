#include "projects.h"

void Projects_18::m18_3()
{
    // 18.3 문자열 스트림
    stringstream os;
    string str1; // >> data를 뽑아 오는 opertor
    
    // case 1.
    os << "Hello world"; // << insertion operator (버퍼에 쌓는다.)
    os << " by jcdlove"; // os 버퍼에 덧붙인다.
    str1 = os.str(); // data를 넣는다.
    cout << str1 << endl;

    // case 2.
    // os.str()은 버퍼에 해당 문자로 대체하는 것이다.
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
    // string을 비우기
    // 여기서 str() 이 함수 오버로딩이 되고 있다.
    os.str(""); // 모든 문자열을 지운다.
    os.clear(); // state까지 지운다.
    cout << os.str() << endl;
}