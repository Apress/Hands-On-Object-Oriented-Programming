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
	cout<<"Bomb object internal fields got initialized automatically with random values\n"; 
	id = rand()%10000;
	x = rand()%100;
	y = rand()%100;
	state = 1;
	buffer = new char[100];
	printf(buffer,"Id:%d X:%d Y:%d STATE:%d \n",id,x,y,state);
}
char* Bomb::getBuffer()
{
	return buffer;
}
Bomb::~Bomb()
{
	if (buffer!=NULL)
	{

		cout<<"Destructor called and dynamic buffer deallocated\n";
		delete buffer;
		buffer = NULL;

	}
	else
	{
		cout<<"Nothing to do\n";
	}
}

int main() 
{      
	{
		cout<<"Inside the block\n";
		Bomb b1;
	}
	cout<<"Outside the block\n";
} 
