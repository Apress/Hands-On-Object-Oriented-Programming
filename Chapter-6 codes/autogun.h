#include <iostream>
using namespace std;
class AutoGun:public Gun
{
	unsigned int range;
	unsigned int timer;
        public:
        AutoGun()
        {
		setBullets(100);	
        }
	void setAutomode(unsigned int time)
	{
		range = rand()%100;
		timer = time;	
	}
	bool isAutoEnabled()
	{
		if (timer>0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void fire()
	{
		int bullets = getBullets();
		if (timer > 0)
		{
			cout<<"Auto mode enabled\n";	
			if (bullets>0)
			{
				bullets=bullets-5;
				setBullets(bullets);
			}
			else
				cout<<"No bullets\n";	
		}
		else
		{
			if (bullets>0)
			{
				bullets=bullets-1;
				setBullets(bullets);
			}
			else
				cout<<"No bullets\n";	
		}
		
	}


};

