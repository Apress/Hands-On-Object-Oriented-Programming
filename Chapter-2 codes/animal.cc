#include<iostream>
#include<string.h>
using namespace std;
class Animal
{
	string name;
	int angle;
	int speed;
	int x,y;
	public:
		string getName();
		void setName(string aname);
		int getAngle();
		void setAngle(int aangle);
		int getSpeed();
		void setSpeed(int aspeed);
		int getX();
		void setX(int ax);
		int getY();
		void setY(int ay);
};
string Animal::getName()
{
	return name;
}
void Animal::setName(string aname)
{
	name = aname;
}
int Animal::getAngle()
{
	return angle;
}
void Animal::setAngle(int aangle)
{
	angle = aangle;
}
int Animal::getSpeed()
{
    return speed;
}
void Animal::setSpeed(int aspeed)
{
    speed = aspeed;
}
int Animal::getX()
{
    return x;
}
void Animal::setX(int ax)
{
    x = ax;
}
int Animal::getY()
{
    return y;
}
void Animal::setY(int ay)
{
    y = ay;
}

int main()
{
	Animal a1;
	a1.setName("Cheetah");
	a1.setAngle(45);
	a1.setSpeed(50);
	a1.setX(100);
	a1.setY(100);
	cout << "Your cheetah object name a1\n";

	cout<<"Let's check at 0,0 any animal is there\n";
	int x=a1.getX();
	int y=a1.getY();
	if (x==0 && y==0)
	{
		cout<<"Careful there is an animal\n";
	}
	else
	{
		cout<<"No! But, near far there is an animal\n";
	}

	cout<<"Let's check Animal can jump\n";
	if (a1.getAngle()>0)
	{	
		cout<<"Oh! Animal can jump over you!\n";	
	}
	else
	{
		cout<<"It cannot jump. But careful!\n";	
	}

	cout<<"Change animal running speed\n";
	a1.setSpeed(70);
	cout<<"Animal is running at high speed "<<a1.getSpeed()<<"Kmph Careful\n";

	return 0;
}



