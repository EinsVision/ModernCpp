#include "projects.h"

class USBDevice
{
private:
	long m_id;

public:
	USBDevice(long id)
		: m_id(id)
	{

	}

	long getID()
	{
		return m_id;
	}

	void plugAndPlay()
	{

	}
};

class NetworkDevice
{
private:
	long m_id;

public:
	NetworkDevice(long id)
		: m_id(id)
	{

	}

	long getID()
	{
		return m_id;
	}

	void networking()
	{

	}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice
{ // ���� ����� ���� ���̴�.
public:
	USBNetworkDevice(long usb_id, long network_id)
		: USBDevice(usb_id), NetworkDevice(network_id)
	{

	}
};

void Projects_11::m11_9()
{
	// 11.9 ���� ��� multiple inheritance
	// �ΰ� �̻��� class�� ���� ��ӹ��� �� �ִ�
	USBNetworkDevice my_device(3.14, 2.0147);

	my_device.networking();
	my_device.plugAndPlay();

	// ������ ���� �� �ִµ� �ߺ��Ǵ� �Լ����� �����.
	my_device.USBDevice::getID();		// �̷��� �ذ� �� �� �ִ�.
	my_device.NetworkDevice::getID();
}