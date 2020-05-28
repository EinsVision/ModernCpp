#include "projects.h"

void Projects_18::m18_6()
{
    // 18.6 기본적인 파일 입출력
    // 아스키 format으로 data를 저장하면 느리다.
    // binary format으로 data를 저장하면 빠르다. 

    // writing
    if (true)
    {
        ofstream ofs("my_first_file.dat", ios::app);
        //ofs.open("my_first_file.dat");

        if (!ofs) // file을 열 수 없었다면,
        {
            cerr << "couldn't open file" << endl;
            exit(1);
        }

        // 아스키 format으로 data를 입력하는 방법
        ofs << "Line 1" << endl;
        ofs << "Line 2" << endl;

        // binary format으로 data를 입력하는 방법
        /*const unsigned int num_data = 10;
        ofs.write((char*)&num_data, sizeof(num_data));

        for (int i = 0; i < num_data; i++)
        {
            ofs.write((char*)&i, sizeof(i));
        }*/

    }
    // reading
    if (true)
    {
        ifstream ifs("my_first_file.dat"/*, ios::binary*/);
                            // binary 혹은 아스키코드롤 열 것인지 선택!
        if (!ifs)
        { 
            cerr << "Cannot open file" << endl;
            exit(1);
        }

        // 아스키 format을 읽어 들어는 형식
        while (ifs)
        {
            string str;
            getline(ifs, str);

            cout << str << endl;
        }

        // binary format으로 data를 출력하는 방법
        /*unsigned num_data = 0;
        ifs.read((char*)&num_data, sizeof(num_data));

        for (unsigned i = 0; i < num_data; i++)
        {
            int num;
            ifs.read((char*)&num, sizeof(num));

            cout << num << endl;
        }*/
    }
}