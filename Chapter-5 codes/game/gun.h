#include <iostream>
using namespace std;
class Gun
{
	int state;
        int x,y,bullets;
	enum states {NOT_AVAILABLE, AVAILABLE};
        public:
        Gun()
        {
                x = rand()%9+5;
                y = rand()%9+5;
                bullets = 10;
		state = AVAILABLE;
        }
        int getX()
        {
                return x;
        }
	int getY()
	{
		return y;
	}
        int getBullets()
        {
                return bullets;
        }
        void setBullets(int ibullets)
        {
                bullets = ibullets;
        }
	void fire()
	{
		if (bullets>0)
		{
			bullets=bullets-1;
		}
		else
			cout<<"No bullets\n";	
	}
	int getState()
        {
                return state;
        }
        void setState(int istate)
        {
                state = istate;
        }


};

