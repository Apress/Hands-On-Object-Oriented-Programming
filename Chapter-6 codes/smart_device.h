#include"iot_sensor.h"
using namespace std;
class SmartDevice
{
	IoTSensor ios1;
	IoTSensor ios2;
	IoTSensor ios3;

	public:
	SmartDevice()
	{
		ios1.setId("Sensor1");
		ios1.setX(0);
		ios1.setY(0);
		ios1.setBatteryLevel(100);

		ios2.setId("Sensor2");
		ios2.setX(10);
		ios2.setY(10);
		ios2.setBatteryLevel(100);

		ios3.setId("Sensor3");
		ios3.setX(5);
		ios3.setY(5);
		ios3.setBatteryLevel(100);


	}
	void configureSensor1(float value)
	{
		ios1.setSenseValue(value);
	}
	float getSensor1Value()
	{
		return ios1.getSenseValue();
	}

	void configureSensor2(float value)
	{
		ios2.setSenseValue(value);
	}
	float getSensor2Value()
	{
		return ios2.getSenseValue();
	}

	void configureSensor3(float value)
	{
		ios3.setSenseValue(value);
	}
	float getSensor3Value()
	{
		return ios3.getSenseValue();
	}




};
