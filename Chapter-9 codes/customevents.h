#include"events.h"
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




