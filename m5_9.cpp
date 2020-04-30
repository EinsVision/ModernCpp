#include "projects.h"

int getRandomNumber(int min, int max)
{
	// 범위 내에서 난수를 생성하는 함수이다. [C style]
	static const double fraction = 1.0 / (RAND_MAX + 1.0);
	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

void Projects_5::m5_9()
{
	// 5.9 난수 만들기 random numbers
	// 컴퓨터는 random number를 만들 능력이 없다.

	//srand(5323); // seed 설정 (이렇게 설정하면 계속 같은 난수를 발생한다.)
	srand(static_cast<unsigned int>(time(0))); // 시간에 따라 변경한다.
	// debugging 할 때는 seed를 고정해야 한다.

	for (int i = 0; i < 100; i++)
	{
		if (i % 5 == 0)
			cout << endl;

		// cout << rand() << "\t";
		cout << getRandomNumber(3, 8) << "\t";
	}

	cout << endl;

	// [C++ style]
	random_device rd;
	mt19937		mt32(rd());	//32 bit 짜리 난수 생성
	mt19937_64 mt64(rd());	//64 bit 짜리 난수 생성
	uniform_int_distribution<> dice(1, 6);


	for (int i = 0; i < 100; i++)
	{
		if (i % 5 == 0)
			cout << endl;

		cout << dice(mt32) << "\t";
	}

}
