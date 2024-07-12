#include<iostream>
using namespace std;
class Drone 
{
	public:
 	virtual ~Drone() {}
 	virtual void Control() const = 0;
};

class MonitoringDrone : public Drone 
{
       public:
  	void Control() const override 
  	{
		cout<<"Drone1 control\n";
  	}
};


class DroneSeller 
{
	public:
	virtual ~DroneSeller(){};
	virtual Drone* DroneFactory() const = 0;

	void userControl() const 
	{
  		Drone* drone = this->DroneFactory();
  		drone->Control();
  		delete drone;
	}
};

class ManufactorA : public DroneSeller
{
	public:
 	Drone* DroneFactory() const override 
	{
   		return new MonitoringDrone();
 	}
};


void ClientCode(const DroneSeller& udrone) 
{
  	cout << "Client:";
	udrone.userControl();
}


int main() 
{
  std::cout << "Drone: Launched with the Manufactor\n";
  DroneSeller* udrone = new ManufactorA();
  ClientCode(*udrone);
  std::cout << std::endl;

  delete udrone;
  return 0;
}
