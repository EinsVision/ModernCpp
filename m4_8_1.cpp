#include "projects.h"
enum Color
{
	RED,
	BLUE,
};
enum Fruit
{
	BANANA,
	ORANGE,
};

enum class Color1
{
	RED,
	BLUE,
};
enum class Fruit1
{
	BANANA,
	ORANGE,
};

void Projects_4::m4_8_1()
{
	//  4.8 영역 제한 열거형 (열거형 클래스)
	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	Color1 color1 = Color1::RED;
	Fruit1 fruit1 = Fruit1::BANANA;

	if (color == fruit) // 단점이 있다.
		cout << "Are those equal? " << endl;

	//if (color1 == fruit1) // enum class로 보완했다.
	//	cout << "Are those equal? " << endl;
}
