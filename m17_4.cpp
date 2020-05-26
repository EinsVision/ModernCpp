#include "projects.h"

void Projects_17::m17_4()
{
    // 17.4 문자 접근하기와 배열로의 변환
    string my_string("abcdefg");
    cout << my_string[0] << endl;
    cout << my_string[1] << endl;
    cout << my_string[2] << endl;

    my_string[2] = 'z';
    cout << my_string << endl;

    // runtime error가 발생한다.
    // my_string[100] = 'ds'; // [ ] 는 예외처리도 안해준다.
    // my_string.at(100);

    cout << my_string.c_str() << endl;
    cout << my_string.c_str()[0] << endl;

    const char* ptr_arr = my_string.c_str();
    cout << "(int)ptr_arr[6]: " << (int)ptr_arr[6] << " " << ptr_arr[6] << endl;
    cout << "(int)ptr_arr[7]: " << (int)ptr_arr[7] << " " << ptr_arr[7] << endl;
    // null 문자를 붙여서 return 해준다.

    // copy 함수를 써서 char에 복사할 수 있다.
    char buf[20];
    my_string.copy(buf, 5, 0);
    buf[5] = '\0'; // 이렇게 넣어야 문제가 안생긴다.
    cout << buf << endl;
    // 이상하게 나오는 것은 null char가 안들어가 있기 때문에 그렇다.

}