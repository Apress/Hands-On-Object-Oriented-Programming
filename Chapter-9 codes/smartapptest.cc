#include"subscribers1.h"
#include"subscribers2.h"
using namespace std;

int main () 
{

  	EventHandler eh;
	IoTSensorsHandler i1(eh);
	SmartVehiclesHandler sv(eh);
  	eh.executeEventOnTarget();	

  	return 0;
}

