#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

class IoTSensor
{
	int id;
	float sense_value;
	int battery_level;
	public:
	void setSenseValue(float val);
	void setId(int sen_id);
	int getId();
	float getSenseValue();
	void setBatteryLevel(int level);
	int getBatteryLevel();

};

void IoTSensor::setId(int sen_id)
{
	if (sen_id>=100 && sen_id<=200)
		id = sen_id;
}
int IoTSensor::getId()
{
	return id;
}

void IoTSensor::setSenseValue(float val)
{
	if (val>=0.0 && val<=10.0)
		sense_value = val;
}
float IoTSensor::getSenseValue()
{
    return sense_value;
}
void IoTSensor::setBatteryLevel(int level)
{
	if (level>=0 && level<=100)
		battery_level = level;
}
int IoTSensor::getBatteryLevel()
{
	return battery_level;
}


void iChangeIoTSensor(IoTSensor &is)
{
	is.setSenseValue(-1);		

}
void vChangeIoTSensor(IoTSensor &is)
{
        is.setSenseValue(1.0);
}

int main()
{

	IoTSensor is1;

/*
	cout<<"From an external function: main()\n";
	cout<<"Trying to configure private data members of IoTSensor using its object directly \n ";
	is1.sense_value = -1.0;
	cout<<"Id: "<<is1.getId()<<" Sense Value "<<is1.getSenseValue()<<" Battery Level "<<is1.getBatteryLevel()<<"\n";
*/
	is1.setId(101);
	is1.setBatteryLevel(90);
	is1.setSenseValue(11.0);

	cout<<"Configuring valid values for data members of IoTSensor using its object public access functions\n ";
	cout<<"Id: "<<is1.getId()<<" Sense Value "<<is1.getSenseValue()<<" Battery Level "<<is1.getBatteryLevel()<<"\n";


	cout<<"From an external function: iChangeIoTSensor\n";
	cout<<"Trying to configure invalid values for private data members of IoTSensor using its public member functions\n ";
	iChangeIoTSensor(is1);
	cout<<"Id: "<<is1.getId()<<" Sense Value "<<is1.getSenseValue()<<" Battery Level "<<is1.getBatteryLevel()<<"\n";


	cout<<"From an external function: vChangeIoTSensor\n";
	cout<<"Trying to configure valid values for private data members of IoTSensors using its public member functions\n ";
	vChangeIoTSensor(is1);
	cout<<"Id: "<<is1.getId()<<" Sense Value "<<is1.getSenseValue()<<" Battery Level "<<is1.getBatteryLevel()<<"\n";


	return 0;
}
