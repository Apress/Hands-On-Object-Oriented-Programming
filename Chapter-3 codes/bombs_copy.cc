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
	Bomb(const Bomb &b);
};
Bomb::Bomb()
{
	id = rand()%10000;
	x = rand()%100;
	y = rand()%100;
	state = 1;


}

Bomb::Bomb(const Bomb &b)
{
    id = b.id;
    x = b.x;
    y = b.y;
    state = 0;
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
		cout<<b[i].getId()<<": ("<<b[i].getX()<<","<<b[i].getY()<<")"<<b[i].getState()<<"\n";
	}

	Bomb *cb[10];
	for (int i=0;i<10;i++)
    	{
		cb[i] = new Bomb(b[i]);
        	cout<<cb[i]->getId()<<": ("<<cb[i]->getX()<<","<<cb[i]->getY()<<")"<<cb[i]->getState()<<"\n";
    	}




} 
