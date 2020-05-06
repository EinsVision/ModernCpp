#include "projects.h"

void Projects_6::m6_21()
{
	// 6.21 std::vector 소개
	// 동적 array를 대체할 수 있다. 
	// std::array<int, 5> my_arr;
	vector<int> my_arr; // size를 적지 않는다.
	vector<int> my_arr2{ 1,2,3,4,5 };
	vector<int> myvector(5);

	cout << "my_arr2.size() : "<<my_arr2.size() << endl;
	cout << "my_arr2.data() :" << my_arr2.data() << endl;
	cout << "&my_arr2: " << &my_arr2 << endl;
	cout << endl; 

	// vector는 delete를 자동으로 해준다.
	my_arr2.resize(10); // 동적으로 메모리의 사이즈를 늘릴수 있다.
	for (auto& element : my_arr2)
	{
		cout << element << " ";
	}
	cout << endl;
	cout <<"my_arr2.capacity() : " <<my_arr2.capacity() << endl;

	cout << "myvector.size() : " << myvector.size() << endl;
	int* p = myvector.data();
	cout << "myvector.data() :" << myvector.data() << endl;
	*p = 1;
	++p; // myvector를 가르키는 위치를 변경시킴 +1 증가시켰다.
	*p = 2;
	++p; // myvector를 가르키는 위치를 변경시킴 +1 증가시켰다.
	*p = 3;
	p[2] = 4; // 1 2 3 0 4  : myvector 이렇게 나옴을 주의하자.
	for (auto& element : myvector)
	{
		cout << element << " ";
	}
	cout << " : myvector" << endl;


}
