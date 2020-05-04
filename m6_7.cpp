#include "projects.h"

struct check_struct_size
{
	int a, b, c, d;
};

void Projects_6::m6_7()
{
	// 6.7 포인터의 기본적인 사용법
	// cpu와 memory가 협력하는 구조를 이해해야 한다.
	// 지역 변수는 '스택' 메모리를 사용하고 동적할당 메모리는 '힙' 메모리를 사용
	// OS로 부터 사용할 메모리를 빌려오는데 주소를 사용해서 빌려온다.
	// 사용하는 모든 변수는 메모리 주소를 가지고 있다. 가지고 있지 않다면 사용못함
	int x = 5;
	cout << x << endl;
	cout <<"Memory address: "<< &x << endl; // 메모리 주소를 출력해볼 수 있다.

	// 포인터: 저쪽 주소에 가면 이 데이터가 있어요라고 간접적으로 가리키기만 하는 것
	// de-reference: 그럼 거기에 진짜 뭐가 있는지 내가 들여다볼께라며 직접적으로 접근하겠다는 의미이다.
	cout <<"de-reference : " <<*(&x) << endl;
	cout << endl; 

	// 메모리 주소를 담는 변수를 포인터라고 한다.
	int* ptr_x;
	ptr_x = &x;

	double* ptr_d;

	cout << typeid(ptr_x).name() << endl;
	cout << typeid(ptr_d).name() << endl;
	// 포인터의 크기는 고정이다. 모든 data type에 대해서 동일하다.
	cout << "sizeof(ptr_x): " << sizeof(ptr_x) << endl;
	cout << "sizeof(ptr_d): " << sizeof(ptr_d) << endl;
	cout << endl;

	check_struct_size ss;
	check_struct_size* ss_ptr;

	cout << sizeof(ss) << endl;
	cout << sizeof(ss_ptr) << endl; // 주소의 크기는 동일하다. 모든 data type에 대해 동일하다.

	// 문제가 생기는 경우를 보자.
	// cout << ss_ptr << endl; // uninitailized memory Error 발생! 쓰레기 값이 들어 있어서 문제가 발생한다.
}
