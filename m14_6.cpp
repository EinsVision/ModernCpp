#include "projects.h"

class A146
{
public:
    ~A146() // destructor������ ���ܸ� throw���� ���ϰ� �Ǿ� �ִ�.
    {
        //throw "error"; //�Ҹ��� �ȿ��� throw�ϴ� ���� �ݱ�� �Ǵ� ���
    }
};

void Projects_14::m14_6()
{
    // 14.6 ����ó���� ���輺�� ����
    // �������� ��ó�ϱ� ����� ��Ȳ���� ����ó���� �ϴ� ���� ����.
    // 1. �޸� ������ �߻��� �� �ִ� �������� �ִ�.
    try
    {
        int* i = new int[1000];
        // smart pointer ��뿹
        unique_ptr<int> up_i(i); // �˾Ƽ� �޸𸮸� �����ش�.
        // 1�� ������ �ذ��� �ش�.

        throw "error";

        // smart pointer�� ���� delete������ �ʿ����. 
        // delete[] i; // �޸� ������ �߻��Ѵ�.
        A146 a; 
        // 2. ����ϰ� �߻��ϴ� �Ҹ��ڿ����� throw�� �� �� ����.
    }
    catch(...)
    {
        cout << "Catch " << endl;
    }
}