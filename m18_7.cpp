#include "projects.h"

void Projects_18::m18_7()
{
    // 18.7 파일의 임의 위치 접근하기
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
    {// file을 한번 열ㅇ어서 읽기도하고 쓰기도하는 방법에 대해 알아본다.
        fstream iofs(fileName);

        iofs.seekg(5);
        cout << (char)iofs.get() << endl;

        iofs.seekg(5);
        iofs.put('A'); // write! 
    }
}