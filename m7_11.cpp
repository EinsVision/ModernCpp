#include "projects.h"

void printStack(vector<int>& stack)
{
	for (auto element : stack)
	{
		cout << element << " ";
	}
	cout << endl;
}

void Projects_7::m7_11() // main 함수가 stack 영역에 쌓인다.
{
	// 7.11 std vector를 스택처럼 사용하기
	vector<int> v{ 1,2,3 };
	// vector는 size, capacity, resize, reserve가 있다.
	v.resize(10);
	v.reserve(1024); // 메모리 용량을 미리 확보해 두겠다.
	// 이렇게 v.reserver()로 용량을 미리 잡아놓으면 훨씬 빠르다. 새로 생성하는
	// 작업이 없기 때문에 훨씬 빠른것이다. new delete을 부르는 구조가 느리다.
	// 너무 크면 메모리가 낭비가 될 위험성이 있다.

	for (auto element : v)
	{
		cout << element << " ";
	}
	cout << endl;

	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;

	v.resize(2); // vector는 속도를 중요시 하기 때문에
	// 메모리를 반납하고 delete과정이 없다. 그래서 ptr[2]로 값을 가져오는 것이 
	// 가능한 것이다.
	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;

	for (auto element : v)
	{
		cout << element << " ";
	}
	cout << endl;
	// cout << "강제로 v[2] 값을 출력해보자.   :: " << v[2] << endl; // abortion 발생 // 값이 있지만 없는 척 한것이다.
	// cout << "강제로 v.at(2) 값을 출력해보자.   :: " << v.at(2) << endl; // abortion 발생 // 값이 있지만 없는 척 한것이다.
	int* ptr = v.data(); // v의 pointer를 가져오자.
	cout << "강제로 ptr[2] 값을 출력해보자.  " << ptr[2] << endl;
	cout << "강제로 ptr[3] 값을 출력해보자.  " << ptr[3] << endl;

	vector<int> stack;
	stack.reserve(1024); // 속도를 더 빠르게 사용하기 위해 사용한다.

	// vector를 stack 처럼 사용하기
	stack.push_back(1);
	stack.push_back(2);
	stack.push_back(3);
	stack.push_back(4);
	stack.push_back(5);
	stack.push_back(6);
	stack.push_back(7);
	stack.push_back(8);
	stack.push_back(9);
	stack.push_back(10);

	printStack(stack);
	
	stack.pop_back();
	stack.pop_back();
	stack.pop_back();
	stack.pop_back();

	printStack(stack);

	// vector를 이용해 stack을 구현하는 것은 new delete을 이용해 
	// 구현하는 것보다 속도가 더 빠르다. 그래서 장점이 있다.
}
