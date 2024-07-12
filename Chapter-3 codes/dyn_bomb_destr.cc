#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
class Bomb
{
	unsigned int id;
	int x,y;
	int state;
	char *buffer;
	public:
	char *getBuffer();
	Bomb();
	~Bomb();
};
Bomb::Bomb()
{
	id = rand()%10000;
	x = rand()%100;
	y = rand()%100;
	state = 1;
	buffer = new char[100];
	if (state == 1)
	{
		sprintf(buffer,"Id:%d X:%d Y:%d %d Active\n",id,x,y,state);
	}
	else
	{
		sprintf(buffer,"Id:%d X:%d Y:%d %d Not Active\n",id,x,y,state);

	}
}
char* Bomb::getBuffer()
{
	return buffer;
}
Bomb::~Bomb()
{
	cout<<"Destructor called\n";
	if (buffer!=NULL)
	{
		delete buffer;
		buffer = NULL;

	}
}

int main() 
{
        Bomb *cb[10];
        for (int i=0;i<10;i++)
        {
                cb[i] = new Bomb();
                cout<<cb[i]->getBuffer();
        }

        for (int i=0;i<10;i++)
        {
                delete cb[i];
                cb[i] = NULL;
        }


} 
