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
vector<IoTSensor> getLowBatterySensors(IoTSensor isensor[10], int value)
{
	vector<IoTSensor> vs;
	for (int i=0;i<10;i++)
	{
		if (isensor[i].getBatteryLevel()<value)
			vs.push_back(isensor[i]);
	}

	return vs;


}


vector<IoTSensor> getHighTempSensors(IoTSensor isensor[10], float value)
{
        vector<IoTSensor> vs;
        for (int i=0;i<10;i++)
        {
                if (isensor[i].getSenseValue()>value)
                        vs.push_back(isensor[i]);
        }
        return vs;

}

float distanceBetween(IoTSensor is1, IoTSensor is2)
{
	int xdisp = is1.getX()-is2.getX();
	int ydisp = is1.getY()-is2.getY();
	return sqrt((xdisp*xdisp+ydisp*ydisp));
}

int SensorIndex(IoTSensor isensor[10], string id)
{
        for (int i=0;i<10;i++)
        {
                if(id == isensor[i].getId())
                {
			return i;
                }
        }
	return -1;
}

IoTSensor findNearestSensorTo(IoTSensor isensor[10], IoTSensor is1)
{
	IoTSensor target;
	float min_dist = 999999.0;
	target=is1;
	for (int i=0;i<10;i++)
	{
		if (distanceBetween(isensor[i], is1)<=min_dist)
		{
			
			min_dist = distanceBetween(isensor[i], is1);
			if (min_dist!=0.0)
			{	
				target = isensor[i];
			}
			if (min_dist==0.0)
			{
				min_dist = 999999.0;
			}


		}

	}
	return target;

	
}


int main()
{
	IoTSensor isensor[10];
	for (int i=0;i<10;i++)
	{
		isensor[i].setId("sensor"+string(1,'A'+i));
		isensor[i].setX(i*10);
		isensor[i].setY(i*10);
		isensor[i].setSenseValue(i*0.001);
		isensor[i].setBatteryLevel(100/(i+1));
	}
	
	cout<<"IoT Sensor deployment details:\n";
	for (int i=0;i<10;i++)
        {
                cout<<isensor[i].getId()<<" "
		<<isensor[i].getX()<<" "
                <<isensor[i].getY()<<" "
                <<isensor[i].getSenseValue()<<" "
                <<isensor[i].getBatteryLevel()<<"\n";
        }


	vector<IoTSensor> lowb_sensors;
	lowb_sensors=getLowBatterySensors(isensor,20);
	cout<<"Low battery IoT Sensors: "<<lowb_sensors.size()<<"\n";
	for (int i=0;i<lowb_sensors.size();i++)
	{
		cout<<lowb_sensors[i].getId()<<" Location: ("<<lowb_sensors[i].getX()<<","<<lowb_sensors[i].getY()<<")"<<"\n";
	}


	vector<IoTSensor> high_sensors;
	float temp=0.005;
        high_sensors=getHighTempSensors(isensor,temp);
	cout<<"High Temprature sensing IoT Sensors: "<<high_sensors.size()<<"\n";
        for (int i=0;i<high_sensors.size();i++)
        {
                cout<<high_sensors[i].getId()<<" Location: ("<<high_sensors[i].getX()<<","<<high_sensors[i].getY()<<")"<<"\n";
        }

	cout<<"High Temprature sensing IoT Sensors: "<<high_sensors.size()<<"\n";
        for (int i=0;i<high_sensors.size();i++)
        {
		IoTSensor target_sensor = findNearestSensorTo (isensor, high_sensors[i]);
		cout<<target_sensor.getId()<<" is the closet IoT sensor to high temprature "<<high_sensors[i].getSenseValue()<<" sensing sensor :"<<high_sensors[i].getId()<<"\n";
        }

	return 0;
}

