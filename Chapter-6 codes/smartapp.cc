#include"smartapplication.h"
using namespace std;
int main()
{
	SmartDevice *sd1,*sd2;
	sd1 = new SmartDevice();
	sd2 = new SmartDevice();
	sd1->configureSensor1(10.2);
	sd1->configureSensor2(20.2);
	sd1->configureSensor3(30.2);
	sd2->configureSensor1(10.1);
	sd2->configureSensor2(10.2);
	sd2->configureSensor3(30.3);
	SmartApplication *s1 = new SmartApplication(*sd1,*sd2);
	s1->SmartApplicationStatus();
	cout<<"SmartDevice1 access"<<sd1->getSensor1Value()<<"\n";
	cout<<"SmartDevice2 access"<<sd2->getSensor1Value()<<"\n";
	delete s1;

	SmartApplication *s2 = new SmartApplication(*sd1,*sd2);
	s2->SmartApplicationStatus();
    	cout<<"SmartDevice1 access"<<sd1->getSensor1Value()<<"\n";
    	cout<<"SmartDevice2 access"<<sd2->getSensor1Value()<<"\n";


}
