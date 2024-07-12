using namespace std;
class SmartDevicev3: public virtual SmartDevice
{
	IoTSensor sps1;
	IoTSensor sps2;

	public:
	SmartDevicev3()
	{
		sps1.setId("HighPrecisionSensor1");
		sps1.setX(22);
		sps1.setY(22);
		sps1.setBatteryLevel(100);


		sps2.setId("HighPrecisionSensor2");
		sps2.setX(30);
		sps2.setY(30);
		sps2.setBatteryLevel(100);

	}
	void configurePrecision1(float value)
	{
		sps1.setSenseValue(value);
	}
	float getPrecision1SenseVal()
	{
		return sps1.getSenseValue();
	}
	void configurePrecision2(float value)
	{
		sps2.setSenseValue(value);
	}
	float getPrecision2SenseVal()
	{
		return sps2.getSenseValue();
	}
};
