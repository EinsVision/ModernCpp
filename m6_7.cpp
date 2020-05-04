#include "projects.h"

struct check_struct_size
{
	int a, b, c, d;
};

void Projects_6::m6_7()
{
	// 6.7 �������� �⺻���� ����
	// cpu�� memory�� �����ϴ� ������ �����ؾ� �Ѵ�.
	// ���� ������ '����' �޸𸮸� ����ϰ� �����Ҵ� �޸𸮴� '��' �޸𸮸� ���
	// OS�� ���� ����� �޸𸮸� �������µ� �ּҸ� ����ؼ� �����´�.
	// ����ϴ� ��� ������ �޸� �ּҸ� ������ �ִ�. ������ ���� �ʴٸ� ������
	int x = 5;
	cout << x << endl;
	cout <<"Memory address: "<< &x << endl; // �޸� �ּҸ� ����غ� �� �ִ�.

	// ������: ���� �ּҿ� ���� �� �����Ͱ� �־���� ���������� ����Ű�⸸ �ϴ� ��
	// de-reference: �׷� �ű⿡ ��¥ ���� �ִ��� ���� �鿩�ٺ������ ���������� �����ϰڴٴ� �ǹ��̴�.
	cout <<"de-reference : " <<*(&x) << endl;
	cout << endl; 

	// �޸� �ּҸ� ��� ������ �����Ͷ�� �Ѵ�.
	int* ptr_x;
	ptr_x = &x;

	double* ptr_d;

	cout << typeid(ptr_x).name() << endl;
	cout << typeid(ptr_d).name() << endl;
	// �������� ũ��� �����̴�. ��� data type�� ���ؼ� �����ϴ�.
	cout << "sizeof(ptr_x): " << sizeof(ptr_x) << endl;
	cout << "sizeof(ptr_d): " << sizeof(ptr_d) << endl;
	cout << endl;

	check_struct_size ss;
	check_struct_size* ss_ptr;

	cout << sizeof(ss) << endl;
	cout << sizeof(ss_ptr) << endl; // �ּ��� ũ��� �����ϴ�. ��� data type�� ���� �����ϴ�.

	// ������ ����� ��츦 ����.
	// cout << ss_ptr << endl; // uninitailized memory Error �߻�! ������ ���� ��� �־ ������ �߻��Ѵ�.
}
