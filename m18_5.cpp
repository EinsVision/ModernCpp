#include "projects.h"

void Projects_18::m18_5()
{
    // 18.5 ���� ǥ���� �Ұ� regular expression
    // � ���ڿ��� �츮�� ���ϴ� ���Ŀ� ������ �ִ��� �Ǵ��ؾ� �Ѵ�.
    regex re("\\d"); // digit (����)���� �ľ��ϰڴ�. ���� 1�� �̴�.
    regex re1("\\d+"); // �������� digit�� �ľ��ϰڴ�.
    // regex re2("[ab]");
    regex re2("[[:digit:]]{3}"); // 3���� digit�� �ްڴ�.
    regex re3("[A-Z]+");
    regex re4("[A-Z]{1,5}"); // �ּ� 1�� �ִ� 5���� �빮�ڸ� �ްڴ�.
    regex re5("(0-9){1}([-]?)([0-9]){1,4}");
    // regex re1("\\d*"); // �������� digit�� �ľ��ϰڴ�.


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