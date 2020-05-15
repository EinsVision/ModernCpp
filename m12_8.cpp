#include "projects.h"

class PoweredDevice
{
public:
	int m_i;
	PoweredDevice(int power)
	{
		cout << "PoweredDevice: " << power << endl;
	}
};

class Scanner: virtual public PoweredDevice
{
public:

	Scanner(int scanner, int power)
		:PoweredDevice(power)
	{
		cout << "Scanner: " << scanner << endl;
	}
};

class Printer : virtual public PoweredDevice
{
public:

	Printer(int printer, int power)
		:PoweredDevice(power)
	{
		cout << "Printer: " << printer << endl;
	}
};

class Copier : public Printer, public Scanner
{
public:

	Copier(int scanner, int printer, int power)
		:Scanner(scanner, power), Printer(printer, power),
		PoweredDevice(power)
	{
		cout << "Copier: " << endl;
	}
};

void Projects_12::m12_8()
{
	// 12.8 가상 기본 클래스와 다이아몬드 상속 문제
	Copier cop(1, 2, 3);
	cout << &cop.Scanner::PoweredDevice::m_i << endl;
	cout << &cop.Printer::PoweredDevice::m_i << endl;
	// 여기서 PoweredDevice class가 두 번 호출되었다. 
	// 다이아몬드 상속 문제가 발생한 것이다.

	// class Printer : virtual public PoweredDevice
	// class Scanner : virtual public PoweredDevice

	// 이렇게 Printer, Scanner class에 상속시 virtual을 넣어준다.
	// m_i 의 주소가 같아진다. 다이아몬드 상속 문제가 해결되었다.

	// PoweredDevice: 3
	// Printer : 2
	// Scanner : 1
	// Copier :
	// 0000007C7D35F7D8
	// 0000007C7D35F7D8
}