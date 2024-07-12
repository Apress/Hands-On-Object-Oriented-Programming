#include<iostream>
using namespace std;
class Bomb
{

	unsigned int id;
	int x,y;
	int state;
	public:
		Bomb();

};

Bomb::Bomb() 
{ 
    cout<<"Bomb object internal fields got initialized automatically with random values\n"; 
    id = rand()%10000; 
	x = rand()%100; 
	y = rand()%100; 
	state = 1;  
} 
int main() 
{ 
	Bomb b1;  
} 
