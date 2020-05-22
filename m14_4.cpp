#include "projects.h"

void Projects_14::m14_4()
{
    // 14.4 exception �Ұ� (std::exception) 
    // �پ��� ���ܿ� ���� ������ �Ǿ� �ִ�. 
    try
    {
        string s;
        s.resize(-1);

        //throw runtime_error("Runtime error Happened");
    }
    //catch (length_error & exp) // �ڽ� class �̴�.
    //{
    //    cout << "length_error" << endl;
    //    cerr << exp.what() << endl;
    //}
    catch (exception& exp) // �θ� class �̴�.
    {
        cout << typeid(exp).name() << endl; // �ڽ� class�� �̸��� ����
        cerr << exp.what() << endl;
    }
}