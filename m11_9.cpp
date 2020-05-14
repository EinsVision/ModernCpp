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
{ // 다중 상속을 받은 것이다.
public:
	USBNetworkDevice(long usb_id, long network_id)
		: USBDevice(usb_id), NetworkDevice(network_id)
	{

	}
};

void Projects_11::m11_9()
{
	// 11.9 다중 상속 multiple inheritance
	// 두개 이상의 class로 부터 상속받을 수 있다
	USBNetworkDevice my_device(3.14, 2.0147);

	my_device.networking();
	my_device.plugAndPlay();

	// 문제가 생길 수 있는데 중복되는 함수에서 생긴다.
	my_device.USBDevice::getID();		// 이렇게 해결 할 수 있다.
	my_device.NetworkDevice::getID();
}