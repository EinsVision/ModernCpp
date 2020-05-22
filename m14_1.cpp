#include "projects.h"

int findFirstChar(const char* my_str, char ch)
{
    for (int index = 0; index < strlen(my_str); ++index)
    {
        if (my_str[index] == ch)
        {
            return index;
        }
    }
    return -1;
}

double divide(int x, int y, bool& success)
{
    if (y == 0)
    {
        success = false;
        return 0.0;
    }
    success = true;
    return static_cast<double>(x) / y;
}

void Projects_14::m14_1()
{
    // 14.1 예외처리의 기본
    // 프로그램이 정상적으로 동작하는지 확인할 방법이 있어야 한다.
    // 정상적인 입력을 판단할 때는 assert를 사용할 수 있다.
    // 여기서는 프로그래밍으로 확인하는 방법에 대해 배운다.
    bool success;
    double result = divide(5, 3, success);

    if(!success)
    {
        cerr << "An error occured" << endl;
    }
    else
    {
        cout << "Result is " << result << endl;
    }

    ifstream input_file("result.txt");

    if (!input_file)
    {
        cerr << "Cannot open file" << endl;
    }
    cout << endl;

    // try, catch, throw 등 예외처리를 하면 프로그램이 느려진다.
    // 예측할 수 없는 일이 벌이지는 경우에 예외처리를 쓴다.
    cout << "input value: ";
    double x;
    cin >> x;
    try
    {
        if (x < 0.0)
        {
            cout << "try region 1" << endl;
            throw string("Nagative input");
            cout << "try region 2" << endl;
        }

        cout << sqrt(x) << endl;
    }
    catch (int x)
    {
        cout << "Catch integer " << x << endl;
    }
    catch (string error_message)
    {
        cout << "Catch region" << endl;
        cout << error_message << endl;
    }
    // 여기서 try에서 throw 했을 때 catch에서 받아줄 곳이 없다면,
    // Run time error를 발생시킨다.
}