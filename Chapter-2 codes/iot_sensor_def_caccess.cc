#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;
struct cIoTSensor
{
    int id;
    float sense_value;
    int battery_level;

};
void ChangeSensor(cIoTSensor &cs1)
{
	cs1.id = -1;
	cs1.sense_value = 0.0;
	cs1.battery_level = -1;
}


int main()
{
	cIoTSensor c1;
	c1.id = 1;
	c1.sense_value = 0.01;
	c1.battery_level = 90;

	cout<<"From an external function: main()\n";
	cout<<"Configuring valid values for data members of IoTSensors  using C structure variable\n ";
	cout<<"Id: "<<c1.id<<" Sense Value "<<c1.sense_value<<" Battery Level "<<c1.battery_level<<"\n";

	cout<<"From an external function: ChangeSensor\n";
	cout<<"Trying to Configure invalid values for data members of IoTSensors using C structure variable\n ";
	ChangeSensor(c1);
	cout<<"Id: "<<c1.id<<" Sense Value "<<c1.sense_value<<" Battery Level "<<c1.battery_level<<"\n";


	return 0;
}
