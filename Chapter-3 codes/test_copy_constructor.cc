#include<iostream>
using namespace std;
class Bomb
{

	unsigned int id;
	int x,y;
	int state;
	public:
		Bomb();
		Bomb(const Bomb &b);

};

Bomb::Bomb() 
{ 
    cout<<"Bomb object internal fields got initialized automatically with random values\n"; 
    id = rand()%10000; 
	x = rand()%100; 
	y = rand()%100; 
	state = 1;  
} 
Bomb::Bomb(const Bomb &b) 
{ 
    cout<<"Copying bomb objects\n"; 
    id = b.id; 
    x = b.x; 
    y = b.y; 
    state = 0; 
} 
int main() 
{ 
	Bomb b1;  
	Bomb b2(b1);
	Bomb b3 = b2;
	return 0;
} 
