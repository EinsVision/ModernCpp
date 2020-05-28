#include "projects.h"

void Projects_18::m18_5()
{
    // 18.5 정규 표현식 소개 regular expression
    // 어떤 문자열이 우리가 원하는 형식에 맞춰져 있는지 판단해야 한다.
    regex re("\\d"); // digit (숫자)인지 파악하겠다. 숫자 1개 이다.
    regex re1("\\d+"); // 여러개의 digit을 파악하겠다.
    // regex re2("[ab]");
    regex re2("[[:digit:]]{3}"); // 3개의 digit만 받겠다.
    regex re3("[A-Z]+");
    regex re4("[A-Z]{1,5}"); // 최소 1개 최대 5개의 대문자만 받겠다.
    regex re5("(0-9){1}([-]?)([0-9]){1,4}");
    // regex re1("\\d*"); // 여러개의 digit을 파악하겠다.


    string str;
    while (true)
    {
        getline(cin, str);

        if (regex_match(str, re5))
        {
            cout << "Match " << endl;
        }
        else
        {
            cout << "No Match " << endl;
        }

        {
            auto begin = sregex_iterator(str.begin(), str.end(), re5);
            auto end = sregex_iterator();
            for (auto itr = begin; itr != end; ++itr)
            {
                smatch match = *itr;
                cout << match.str() << " ";
            }
            cout << endl;
        }
    }
}