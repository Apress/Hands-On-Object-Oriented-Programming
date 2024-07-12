#include"events.h"
using namespace std;
class warningEvent : public Event 
{ 
	public:
  	warningEvent (unsigned int eid):Event(eid)
  	{ 
  	}
	void handleEvent()
	{
		if (getEventId() == 4)
			cout<<"Handle IoT sensor  warning "<<getEventId()<<"\n";
		else
			cout<<"Handle warning \n";

	}
};


class emergencyEvent : public Event 
{ 
	public:
  	emergencyEvent (unsigned int eid):Event(eid)
  	{
  	}
	void handleEvent()
	{

		if (getEventId() == 2)
			cout<<"Handle IoT sensor emergency "<<getEventId()<<"\n";
		else
			cout<<"Handle emergency \n";

	}
};

class IoTSensorsHandler: public EventHandler
{
	EventHandler ih;
	public:
		IoTSensorsHandler()
		{
		}
		IoTSensorsHandler(EventHandler &eh)
		{
    			eh.subscribeEvent (new emergencyEvent (2));
    			eh.subscribeEvent (new emergencyEvent (2));
    			eh.subscribeEvent (new emergencyEvent (2));
    			eh.subscribeEvent (new emergencyEvent (2));
    			eh.subscribeEvent (new warningEvent (4));
    			eh.subscribeEvent (new warningEvent (4));
    			eh.subscribeEvent (new warningEvent (4));
    			eh.subscribeEvent (new warningEvent (4));
		}
		void actOnEvent()
		{
			cout<<"Reacto to smart vehile event\n";
    			ih.subscribeEvent (new emergencyEvent (2));
  			ih.executeEventOnTarget();	
		}
};



