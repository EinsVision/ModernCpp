#include "projects.h"

void Projects_18::m18_6()
{
    // 18.6 �⺻���� ���� �����
    // �ƽ�Ű format���� data�� �����ϸ� ������.
    // binary format���� data�� �����ϸ� ������. 

    // writing
    if (true)
    {
        ofstream ofs("my_first_file.dat", ios::app);
        //ofs.open("my_first_file.dat");

        if (!ofs) // file�� �� �� �����ٸ�,
        {
            cerr << "couldn't open file" << endl;
            exit(1);
        }

        // �ƽ�Ű format���� data�� �Է��ϴ� ���
        ofs << "Line 1" << endl;
        ofs << "Line 2" << endl;

        // binary format���� data�� �Է��ϴ� ���
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
                            // binary Ȥ�� �ƽ�Ű�ڵ�� �� ������ ����!
        if (!ifs)
        { 
            cerr << "Cannot open file" << endl;
            exit(1);
        }

        // �ƽ�Ű format�� �о� ���� ����
        while (ifs)
        {
            string str;
            getline(ifs, str);

            cout << str << endl;
        }

        // binary format���� data�� ����ϴ� ���
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