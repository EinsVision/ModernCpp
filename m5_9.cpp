#include "projects.h"

int getRandomNumber(int min, int max)
{
	// ���� ������ ������ �����ϴ� �Լ��̴�. [C style]
	static const double fraction = 1.0 / (RAND_MAX + 1.0);
	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

void Projects_5::m5_9()
{
	// 5.9 ���� ����� random numbers
	// ��ǻ�ʹ� random number�� ���� �ɷ��� ����.

	//srand(5323); // seed ���� (�̷��� �����ϸ� ��� ���� ������ �߻��Ѵ�.)
	srand(static_cast<unsigned int>(time(0))); // �ð��� ���� �����Ѵ�.
	// debugging �� ���� seed�� �����ؾ� �Ѵ�.

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
	mt19937		mt32(rd());	//32 bit ¥�� ���� ����
	mt19937_64 mt64(rd());	//64 bit ¥�� ���� ����
	uniform_int_distribution<> dice(1, 6);


	for (int i = 0; i < 100; i++)
	{
		if (i % 5 == 0)
			cout << endl;

		cout << dice(mt32) << "\t";
	}

}
