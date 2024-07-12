#include"smart_device.h"
using namespace std;
class SmartDevicev2: public virtual SmartDevice
{
	IoTSensor sps;

	public:
	SmartDevicev2()
	{
		sps.setId("HighPrecisionSensor");
		sps.setX(20);
		sps.setY(20);
		sps.setBatteryLevel(100);



	}
	void configurePrecision(float value)
	{
		sps.setSenseValue(value);
	}
	float getPrecisionSenseVal()
	{
		return sps.getSenseValue();
	}
};
