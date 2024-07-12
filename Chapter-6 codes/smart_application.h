#include"smart_device.h"
using namespace std;
class SmartApplication
{

	public:	
	SmartApplication(SmartDevice tsd1, SmartDevice tsd2)
	{
		SmartDevice &sd1 = tsd1;
		SmartDevice &sd2 = tsd2;

		if (sd1.getSensor1Value()>sd2.getSensor1Value())
		{
			cout<<"Alert1\n";
		}
		if (sd1.getSensor2Value()<sd2.getSensor2Value())
		{
			cout<<"Alert2\n";
		}
		if (sd1.getSensor3Value()<sd2.getSensor3Value())
		{
			cout<<"Emergency Alert\n";
		}


	}
	void SmartApplicationStatus()
	{
		cout<<"Smart Application is running";
	}

};
