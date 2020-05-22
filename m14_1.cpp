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
    // 14.1 ����ó���� �⺻
    // ���α׷��� ���������� �����ϴ��� Ȯ���� ����� �־�� �Ѵ�.
    // �������� �Է��� �Ǵ��� ���� assert�� ����� �� �ִ�.
    // ���⼭�� ���α׷������� Ȯ���ϴ� ����� ���� ����.
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

    // try, catch, throw �� ����ó���� �ϸ� ���α׷��� ��������.
    // ������ �� ���� ���� �������� ��쿡 ����ó���� ����.
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
    // ���⼭ try���� throw ���� �� catch���� �޾��� ���� ���ٸ�,
    // Run time error�� �߻���Ų��.
}