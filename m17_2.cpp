#include "projects.h"

template <typename T>
string ToString(T x)
{
    ostringstream osstream; // ���� ���� �� �Ǿ��� string���� ��ȯ�Ѵ�.
    osstream << x;
    return osstream.str();
}

template <typename T>
bool FromString(const string & str,T&x)
{
    istringstream isstream(str);
    return (isstream >> x) ? true : false;
}

void Projects_17::m17_2()
{
    // 17.2 std::string�� �������� �����ڵ�� ����ȯ
    string my_string1;
    cout << "�׳� string ���� ����: "<<my_string1 << endl;

    string my_string2("My String");
    cout <<"���� �ʱ�ȭ�� string ���� ����: "<< my_string2 << endl;

    string my_string3(my_string2, 3);
    cout << "���� �����ڷ� ����: "<<my_string3 << endl;

    string my_string4(my_string2, 3, 3);
    cout << "���� �����ڷ� ����: " << my_string4 << endl;

    const char* my_string = "My char string";
    string my_string5(my_string, 5); // ���⼭�� �ٸ��� ����
    cout << "���� �����ڷ� ����: " << my_string5 << endl;

    string my_string6(5,'A');
    cout << "���� �����ڷ� ����: " << my_string6 << endl;

    vector<char> vec;
    for (auto e : "Today is a good day.")
    {
        vec.push_back(e);
    }
    string my_string7(vec.begin(), vec.end());
    cout << "Iterator�� �̿��� �ʱ�ȭ: " << my_string7 << endl;

    string my_string8(vec.begin(), find(vec.begin(), vec.end(), 'y'));
    cout << "Iterator�� �̿��� �ʱ�ȭ: " << my_string8 << endl;

    string my_string9(to_string(4)); // ������ ���ڷ� �ٲ��� �� ����.

    my_string9 += to_string(567);
    cout << my_string9 << endl;

    int i = stoi(my_string9); // string to int
    cout << "stoi(my_string9); " << i << endl;

    float f = stof(my_string9); // string to float
    cout << "stof(my_string9); " << f << endl;

    string my_string10(ToString(3.1415)); // ���ڿ��� �����Ѵ�.
    cout << "my_string10(ToString(3.1415)); " << my_string10 << endl;

    double d;
    if (FromString(my_string10, d))
    {
        cout << "d: " << d << endl;
    }
    else
    {
        cout << "FromString false return" << endl;
    }
}