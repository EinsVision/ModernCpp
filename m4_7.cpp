#include "projects.h"

enum Color_m4_7 //user-defined data types
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	// BLUE,
};

enum Emotion_m4_7
{
	GLOOMY,
	// BLUE, // ���� ����ó�� �����ؼ� ������� �ʴ´�.
	HAPPY,
};

void Projects_4::m4_7()
{
    // 4.7 ������ enumerated types
    cout << Color_m4_7::COLOR_BLACK << endl;
    cout << Color_m4_7::COLOR_RED << endl;
    cout << Color_m4_7::COLOR_GREEN << endl;

    Color_m4_7 paint = COLOR_RED;
    Color_m4_7 house(COLOR_BLACK);
    Color_m4_7 car{ COLOR_GREEN };
    cout << paint << endl;
	cout << endl;

	int test_enum = HAPPY;
	cout << test_enum << endl;

	//Color_m4_7 house_1 = 0; // �̰Ŵ� �ȵȴ�.
	Color_m4_7 housed_2 = static_cast<Color_m4_7>(3); // �̷��Դ� �����ϴ�.
	cout << "housed_2: "<<housed_2 << endl;
}
