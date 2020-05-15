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
	// 12.8 ���� �⺻ Ŭ������ ���̾Ƹ�� ��� ����
	Copier cop(1, 2, 3);
	cout << &cop.Scanner::PoweredDevice::m_i << endl;
	cout << &cop.Printer::PoweredDevice::m_i << endl;
	// ���⼭ PoweredDevice class�� �� �� ȣ��Ǿ���. 
	// ���̾Ƹ�� ��� ������ �߻��� ���̴�.

	// class Printer : virtual public PoweredDevice
	// class Scanner : virtual public PoweredDevice

	// �̷��� Printer, Scanner class�� ��ӽ� virtual�� �־��ش�.
	// m_i �� �ּҰ� ��������. ���̾Ƹ�� ��� ������ �ذ�Ǿ���.

	// PoweredDevice: 3
	// Printer : 2
	// Scanner : 1
	// Copier :
	// 0000007C7D35F7D8
	// 0000007C7D35F7D8
}