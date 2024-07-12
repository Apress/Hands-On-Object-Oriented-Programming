#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;
class IoTSensor
{
	private:
		string id;
		int x,y;
		float sense_value;
		int battery_level;
	public:
		void setId(string sen_id);
		string getId();
		void setX(int sen_x);
		int getX();
		void setY(int sen_y);
		int getY();
		void setSenseValue(float val);
		float getSenseValue();
		void setBatteryLevel(int level);
		int getBatteryLevel();

};

void IoTSensor::setId(string sen_id)
{
	id = sen_id;
}
string IoTSensor::getId()
{
	return id;
}
void IoTSensor::setX(int sen_x)
{
	x = sen_x;
}
int IoTSensor::getX()
{
	return x;
}
void IoTSensor::setY(int sen_y)
{
        y = sen_y;
}
int IoTSensor::getY()
{
        return y;
}

void IoTSensor::setSenseValue(float val)
{
	sense_value = val;
}
float IoTSensor::getSenseValue()
{
        return sense_value;
}
void IoTSensor::setBatteryLevel(int level)
{
	battery_level = level;
}
int IoTSensor::getBatteryLevel()
{
	return battery_level;
}
