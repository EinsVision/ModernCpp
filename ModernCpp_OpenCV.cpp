#include "projects.h"
          // 개수    // 실제 내용
int main(int argc, char* argv[])
{
    for (int count = 0; count < argc; ++count)
    {
        string str = argv[count];

        if (count == 1)
        {
            int input_number = stoi(str);     // 문자를 int형으로 변환
            cout << input_number + 1 << endl; // 문자가 숫자로 변환되었다.
        }
        else
        {
            cout << str << endl;
        }
    }
    // Property -> Debugging -> Command Arguments 에서 값을 입력!
    Projects_7 projec;
    projec.m7_15();
    
    return 0;
}