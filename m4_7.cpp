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
	// BLUE, // 전역 변수처럼 동작해서 허용하지 않는다.
	HAPPY,
};

void Projects_4::m4_7()
{
    // 4.7 열거형 enumerated types
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

	//Color_m4_7 house_1 = 0; // 이거는 안된다.
	Color_m4_7 housed_2 = static_cast<Color_m4_7>(3); // 이렇게는 가능하다.
	cout << "housed_2: "<<housed_2 << endl;
}
