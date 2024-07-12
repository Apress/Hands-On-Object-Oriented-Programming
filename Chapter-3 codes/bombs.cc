#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
class Bomb
{
	unsigned int id;
	int x,y;
	int state;
	public:
	int getId();
	int getX();
	int getY();
	int getState();
	Bomb();
};
Bomb::Bomb()
{
	id = rand()%10000;
	x = rand()%100;
	y = rand()%100;
	state = 1;
}


int Bomb::getId()
{
	return id;
}
int Bomb::getX()
{
        return x;
}
int Bomb::getY()
{
	return y;
}
int Bomb::getState()
{
	return state;
}

int main()
{
	Bomb b[10];
	for (int i=0;i<10;i++)
	{
		cout<<b[i].getId()<<": ("<<b[i].getX()<<","<<b[i].getY()<<")"<<"\n";
	}


}
