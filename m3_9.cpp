#include "projects.h"

void Projects_3::m3_9()
{
	// 3.9 ��Ʈ �÷���, ��Ʈ ����ũ ���� Bit flags, Bit masks
	// bit flag�� 1 bit ���� �ٷ�� ���̰� 
	// bit mask�� ���� bit�� �ٷ�� ���̴�. 
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	const unsigned char opt4 = 1 << 4;
	const unsigned char opt5 = 1 << 5;
	const unsigned char opt6 = 1 << 6;
	const unsigned char opt7 = 1 << 7;

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;
	cout << bitset<8>(opt4) << endl;
	cout << bitset<8>(opt5) << endl;
	cout << bitset<8>(opt6) << endl;
	cout << bitset<8>(opt7) << endl;
	cout << endl; 

	unsigned char item_flag = 0;
	cout << "No item: "<<bitset<8>(item_flag) << endl;

	// Obtained item 1
	// item_flag = item_flag | opt1;
	item_flag |= opt1;
	//item_flag |= (opt1 | opt2); // ���� �������� ���� �� �̷��� �Ѵ�.
	cout <<"Item: "<< bitset<8>(item_flag) << endl;

	// Obtained item 7
	// item_flag = item_flag | opt7;
	item_flag |= opt7;
	cout << "Item obtained: " << bitset<8>(item_flag) << endl;

	// Lost item 1
	cout << "Mask: " << bitset<8>(~opt1) << endl;
	// item_flag = item_flag & ~opt1;
	item_flag &= ~opt1;
	cout << "Item lost: " << bitset<8>(item_flag) << endl;
	cout << endl;

	// check item 7
	if (item_flag & opt7)
	{
		cout << "Item 7: " << bitset<8>(item_flag) << endl;
	}
	cout << endl;

	// check item 1
	if (item_flag & opt1)
	{
		cout << "Item 1: " << bitset<8>(item_flag) << endl;
	}
	cout << endl;

	// ���� ǥ���� �� 4BYTE�� ����Ѵ�.
	unsigned int pixel_color = 0xDAA520;
	cout << bitset<32>(pixel_color) << endl;

	unsigned char red, green, blue;
	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << "color is  " << hex << pixel_color << endl;
	red = (red_mask & pixel_color)>>16;		// shift ���� ���
	cout << bitset<8>(red) << " : red : " << hex << (int)red << endl;

	green = (green_mask & pixel_color)>>8;  // shift ���� ���
	cout << bitset<8>(green) << " : green : " << hex << (int)green << endl;

	blue = blue_mask & pixel_color;
	cout << bitset<8>(blue) << " : blue : " << hex << (int)blue << endl;

}
