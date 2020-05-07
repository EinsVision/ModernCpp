#include "projects.h"

void printStack(vector<int>& stack)
{
	for (auto element : stack)
	{
		cout << element << " ";
	}
	cout << endl;
}

void Projects_7::m7_11() // main �Լ��� stack ������ ���δ�.
{
	// 7.11 std vector�� ����ó�� ����ϱ�
	vector<int> v{ 1,2,3 };
	// vector�� size, capacity, resize, reserve�� �ִ�.
	v.resize(10);
	v.reserve(1024); // �޸� �뷮�� �̸� Ȯ���� �ΰڴ�.
	// �̷��� v.reserver()�� �뷮�� �̸� ��Ƴ����� �ξ� ������. ���� �����ϴ�
	// �۾��� ���� ������ �ξ� �������̴�. new delete�� �θ��� ������ ������.
	// �ʹ� ũ�� �޸𸮰� ���� �� ���輺�� �ִ�.

	for (auto element : v)
	{
		cout << element << " ";
	}
	cout << endl;

	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;

	v.resize(2); // vector�� �ӵ��� �߿�� �ϱ� ������
	// �޸𸮸� �ݳ��ϰ� delete������ ����. �׷��� ptr[2]�� ���� �������� ���� 
	// ������ ���̴�.
	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;

	for (auto element : v)
	{
		cout << element << " ";
	}
	cout << endl;
	// cout << "������ v[2] ���� ����غ���.   :: " << v[2] << endl; // abortion �߻� // ���� ������ ���� ô �Ѱ��̴�.
	// cout << "������ v.at(2) ���� ����غ���.   :: " << v.at(2) << endl; // abortion �߻� // ���� ������ ���� ô �Ѱ��̴�.
	int* ptr = v.data(); // v�� pointer�� ��������.
	cout << "������ ptr[2] ���� ����غ���.  " << ptr[2] << endl;
	cout << "������ ptr[3] ���� ����غ���.  " << ptr[3] << endl;

	vector<int> stack;
	stack.reserve(1024); // �ӵ��� �� ������ ����ϱ� ���� ����Ѵ�.

	// vector�� stack ó�� ����ϱ�
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

	// vector�� �̿��� stack�� �����ϴ� ���� new delete�� �̿��� 
	// �����ϴ� �ͺ��� �ӵ��� �� ������. �׷��� ������ �ִ�.
}
