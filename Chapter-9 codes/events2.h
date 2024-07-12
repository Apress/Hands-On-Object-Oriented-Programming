#include<iostream>
#include<queue>
#include<vector>
#include <experimental/random>
using namespace std;
class Event
{
    	unsigned int eventid;
    	public:
    	Event (unsigned int id)
    	{
            	eventid = id;
    	}
    	unsigned int getEventId()
    	{
            	return eventid;
    	}

    	virtual void handleEvent () = 0;

};
struct eventComparator
{
        bool operator() (Event * left, Event * right)
        {
                return left->getEventId() > right->getEventId();
        }
};

class EventHandler
{
    	protected:
	unsigned int eid;
    	std::priority_queue<Event*,
    	std::vector<Event *, std::allocator<Event*> >,
    	eventComparator> equeue;
	public:
    	EventHandler ()
    	{
            	eid = 0;
    	}
    	void  subscribeEvent (Event* newEvent)
    	{
		if (newEvent->getEventId()<= 100)
		{
            	cout<<"Event inserted\n";
            	cout<<"event id "<<newEvent->getEventId()<<"\n";
            	equeue.push(newEvent);
		}

    	} 	
    	void  executeEventOnTarget()
    	{
            	while (! equeue.empty ())
            	{
                    	Event * nextEvent = equeue.top ();
                    	equeue.pop ();
                    	eid = nextEvent->getEventId();
                       nextEvent->handleEvent ();
                       delete nextEvent;
            	}
      }
};



