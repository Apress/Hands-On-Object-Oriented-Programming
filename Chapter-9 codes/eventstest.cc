#include"events2.h"
using namespace std;
class sampleEvent1 : public Event
{
    	public:
    	sampleEvent1 (unsigned int eid):Event(eid)
    	{
    	}
    	void handleEvent()
    	{
            	cout<<"Sample event 1 handling\n";
    	}
};
class sampleEvent2 : public Event
{
    	public:
    	sampleEvent2 (unsigned int eid):Event(eid)
    	{
    	}
    	void handleEvent()
    	{
            	cout<<"Sample event 2 handling\n";
    	}
};
int main ()
{
    	EventHandler eh;
    	for (int i=0;i<10;i++)
    	{

            	cout << "Generating events " << i << '\n';
            	eh.subscribeEvent (new sampleEvent1 (2));
            	eh.subscribeEvent (new sampleEvent2 (4));
    	}
    	eh.executeEventOnTarget();

    	return 0;
}

