#include "projects.h"

// �Լ��� ���ϰ��� ���ؼ��� auto �� �� �� �ִ�.
auto add(int x, int y) 
// auto add(auto x, auto y) �� ���� ���´� �� �� ����.
{
    return x + double(y); // ���� double�� y�� ����ȯ�ϸ�, return Ÿ���� �مR��.
}

void Projects_4::m4_4()
{
    // 4.4 auto Ű����� �ڷ��� �߷�
    
    auto a = 123;       // int a �� �ڵ����� �����ȴ�.
    // auto b; // b �� �ʱ�ȭ ���� ������ auto�� ����� �� ����.
    auto b = 123.0;     // double b�� �ڵ����� �����ȴ�.
    auto c = 1 + 2.0;   // double c�� �ڵ����� �����ȴ�.
    auto result = add(1, 2); // �Լ��� return Ÿ�Կ� ���� result �� �����ȴ�.
  
    cout << "result size: "<<sizeof(result) << endl;
}
