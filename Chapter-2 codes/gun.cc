#include<iostream>
#include<string.h>
using namespace std;
class Gun
{
	string model;
	int angle;
	int bullets;
	int x,y;
	public:
		string getModel();
		void setModel(string model);
		int getAngle();
		void setAngle(int gangle);
		int getBullets();
		void setBullets(int gbullets);
		int getX();
		void setX(int gx);
		int getY();
		void setY(int gy);
		void fire(int angle, int speed);

};
string Gun::getModel()
{
	return model;
}
void Gun::setModel(string gmodel)
{
	model = model;
}
int Gun::getAngle()
{
	return angle;
}
void Gun::setAngle(int gangle)
{
	angle = gangle;
}
int Gun::getBullets()
{
    return bullets;
}
void Gun::setBullets(int gbullets)
{
    bullets = gbullets;
}
int Gun::getX()
{
    return x;
}
void Gun::setX(int gx)
{
    x = gx;
}
int Gun::getY()
{
    return y;
}
void Gun::setY(int gy)
{
    y = gy;
}

void Gun::fire (int gangle, int speed)
{
	angle = gangle;
	bullets = bullets-speed;
}

int main()
{
	cout<<"Place a gun at 10,10 location with 100 bullets\n";

	Gun g1;
	g1.setModel("HiFi");
	g1.setX(10);
	g1.setY(10);
	g1.setBullets(100);

	cout<<"check is there any gun at your location then fire it at speed 10 bullets/sec\n";

	int x=g1.getX();
	int y=g1.getY();

	if (x!=0 && y!=0)
	{
		cout<<"There is a gun\n";
		while (1)
		{
			g1.fire(10,10);
			cout<<"Firing at angle 10 ...\n";
			if (g1.getBullets()<=0)
			{
				cout<<"Oh! No bullets\n";
				break;
			}
		}
	}


	return 0;
}



