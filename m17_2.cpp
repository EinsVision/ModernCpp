#include "projects.h"

template <typename T>
string ToString(T x)
{
    ostringstream osstream; // 들어온 것을 뭐 되었든 string으로 변환한다.
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
    // 17.2 std::string의 여러가지 생성자들과 형변환
    string my_string1;
    cout << "그냥 string 선언 가능: "<<my_string1 << endl;

    string my_string2("My String");
    cout <<"문자 초기화로 string 선언 가능: "<< my_string2 << endl;

    string my_string3(my_string2, 3);
    cout << "복사 생성자로 가능: "<<my_string3 << endl;

    string my_string4(my_string2, 3, 3);
    cout << "복사 생성자로 가능: " << my_string4 << endl;

    const char* my_string = "My char string";
    string my_string5(my_string, 5); // 여기서는 다르게 동작
    cout << "복사 생성자로 가능: " << my_string5 << endl;

    string my_string6(5,'A');
    cout << "복사 생성자로 가능: " << my_string6 << endl;

    vector<char> vec;
    for (auto e : "Today is a good day.")
    {
        vec.push_back(e);
    }
    string my_string7(vec.begin(), vec.end());
    cout << "Iterator를 이용한 초기화: " << my_string7 << endl;

    string my_string8(vec.begin(), find(vec.begin(), vec.end(), 'y'));
    cout << "Iterator를 이용한 초기화: " << my_string8 << endl;

    string my_string9(to_string(4)); // 정수를 문자로 바꿔줄 수 있음.

    my_string9 += to_string(567);
    cout << my_string9 << endl;

    int i = stoi(my_string9); // string to int
    cout << "stoi(my_string9); " << i << endl;

    float f = stof(my_string9); // string to float
    cout << "stof(my_string9); " << f << endl;

    string my_string10(ToString(3.1415)); // 문자열로 변경한다.
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