#include "projects.h"

void Projects_18::m18_7()
{
    // 18.7 ������ ���� ��ġ �����ϱ�
    const string fileName = "my_file.txt";

    // make a file
    {
        ofstream ofs(fileName);

        for (char i = 'a'; i <= 'z'; ++i)
        {
            ofs << i;
        }
        ofs << endl;
    }

    // read the file
    {
        ifstream ifs(fileName);
        ifs.seekg(5);
        cout << (char)ifs.get() << endl;

        ifs.seekg(5, ios::cur);
        cout << (char)ifs.get() << endl;
    }

    // file write and read
    {// file�� �ѹ� ����� �б⵵�ϰ� ���⵵�ϴ� ����� ���� �˾ƺ���.
        fstream iofs(fileName);

        iofs.seekg(5);
        cout << (char)iofs.get() << endl;

        iofs.seekg(5);
        iofs.put('A'); // write! 
    }
}