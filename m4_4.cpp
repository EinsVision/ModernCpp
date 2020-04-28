#include "projects.h"

// 함수의 리턴값에 대해서도 auto 를 쓸 수 있다.
auto add(int x, int y) 
// auto add(auto x, auto y) 와 같은 형태는 쓸 수 없다.
{
    return x + double(y); // 만일 double로 y를 형변환하면, return 타입이 바꿘다.
}

void Projects_4::m4_4()
{
    // 4.4 auto 키워드와 자료형 추론
    
    auto a = 123;       // int a 가 자동으로 결정된다.
    // auto b; // b 가 초기화 되지 않으면 auto는 사용할 수 없다.
    auto b = 123.0;     // double b가 자동으로 결정된다.
    auto c = 1 + 2.0;   // double c가 자동으로 결정된다.
    auto result = add(1, 2); // 함수의 return 타입에 따라 result 가 결정된다.
  
    cout << "result size: "<<sizeof(result) << endl;
}
