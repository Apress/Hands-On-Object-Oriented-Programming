#include"smart_devicev2v.h"
#include"smart_devicev3v.h"
using namespace std;
class SmartDevicev4: public SmartDevicev2, public SmartDevicev3
{

	public:
		void configureSensor1(float value)
		{
			configureSensor2(value);
			configureSensor3(value);
		}
		float getSensor1Value()
		{
			return getSensor2Value()+getSensor3Value();
		}

};
int main()
{
	SmartDevicev2 sd1;
    	sd1.configureSensor1(10.2);
    	sd1.configureSensor2(20.2);
    	sd1.configureSensor3(30.2);
    	cout<<"SmartDevicev2 sensor1 access"<<sd1.getSensor1Value()<<"\n";
    	cout<<"SmartDevicev2 sensor2 access"<<sd1.getSensor2Value()<<"\n";
    	cout<<"SmartDevicev2 sensor3 access"<<sd1.getSensor3Value()<<"\n";
    	sd1.configurePrecision(10.999);
    	cout<<"SmartDevice2 precision sensor access:"<<sd1.getPrecisionSenseVal()<<"\n";

	SmartDevicev3 sd2;
    	sd2.configureSensor1(10.2);
    	sd2.configureSensor2(20.2);
    	sd2.configureSensor3(30.2);
    	cout<<"SmartDevicev3 sensor1 access"<<sd2.getSensor1Value()<<"\n";
    	cout<<"SmartDevicev3 sensor2 access"<<sd2.getSensor2Value()<<"\n";
    	cout<<"SmartDevicev3 sensor3 access"<<sd2.getSensor3Value()<<"\n";
    	sd2.configurePrecision1(40.999);
    	cout<<"SmartDevice1 precision:"<<sd2.getPrecision1SenseVal()<<"\n";
    	
    	SmartDevicev4 sd3;
    	sd3.configureSensor1(50.2);
    	sd3.configureSensor2(60.2);
    	sd3.configureSensor3(70.2);
    	cout<<"SmartDevicev4 access"<<sd3.getSensor1Value()<<"\n";
    	cout<<"SmartDevicev4 access"<<sd3.getSensor2Value()<<"\n";
    	cout<<"SmartDevicev4 access"<<sd3.getSensor3Value()<<"\n";


	sd3.configureSensor1(100.99999);
    	cout<<"SmartDevicev4 access"<<sd3.getSensor1Value()<<"\n";
    	cout<<"SmartDevicev4 access"<<sd3.getSensor2Value()<<"\n";
    	cout<<"SmartDevicev4 access"<<sd3.getSensor3Value()<<"\n";

    	cout<<"SmartDevicev4 access"<<sd3.getSensor1Value()<<"\n";


}
