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
	//  4.8 ���� ���� ������ (������ Ŭ����)
	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	Color1 color1 = Color1::RED;
	Fruit1 fruit1 = Fruit1::BANANA;

	if (color == fruit) // ������ �ִ�.
		cout << "Are those equal? " << endl;

	//if (color1 == fruit1) // enum class�� �����ߴ�.
	//	cout << "Are those equal? " << endl;
}
