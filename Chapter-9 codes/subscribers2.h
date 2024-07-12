using namespace std;
class dataEvent : public Event 
{ 
        IoTSensorsHandler s1;	
	public:
  	dataEvent (IoTSensorsHandler &s,unsigned int eid):Event(eid)
  	{ 
		s1 = s;
  	}
	void handleEvent()
	{
		if (getEventId() == 5)
		{
			cout<<"Handle Vehicle critical sensor data "<<getEventId()<<"\n";
			s1.actOnEvent();
		}
		else
			cout<<"Handle Vehicle normal data \n";

	}
};


class aggregateEvent : public Event 
{ 
	public:
  	aggregateEvent (unsigned int eid):Event(eid)
  	{
  	}
	void handleEvent()
	{

		if (getEventId() == 6)
			cout<<"Handle Vehicle sensors data aggregating "<<getEventId()<<"\n";
		else
			cout<<"Handle Vehicle data checking \n";

	}
};

class SmartVehiclesHandler: public EventHandler
{
	public:
		SmartVehiclesHandler(EventHandler &eh)
		{
			IoTSensorsHandler sensor1;
			IoTSensorsHandler sensor2;

    			eh.subscribeEvent (new dataEvent (sensor1,5));
    			eh.subscribeEvent (new dataEvent (sensor2,5));
    			eh.subscribeEvent (new aggregateEvent (6));
    			eh.subscribeEvent (new aggregateEvent (200));
		}
};



