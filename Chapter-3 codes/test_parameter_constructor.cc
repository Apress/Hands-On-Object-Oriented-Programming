#include<iostream>
using namespace std;
class Bomb
{

	unsigned int id;
	int x,y;
	int state;
	public:
		Bomb();
		Bomb(int bx, int by);
		Bomb(int bid);
		int getId();
		void setId(int bid);


};

int Bomb::getId()
{
	return id;
}

void Bomb::setId(int bid)
{
	id = bid;
}
Bomb::Bomb() 
{ 
    cout<<"Bomb object internal fields got initialized automatically with random values\n"; 
    id = rand()%10000; 
	x = rand()%100; 
	y = rand()%100; 
	state = 1;  
}
Bomb::Bomb(int bx, int by) 
{ 
   x = bx; 
   y = by; 
   cout<<"Constructor1 called\n"; 
}
Bomb::Bomb(int bid) 
{
   id = bid;
   cout<<"Constructor2 called\n";  

} 
int main() 
{ 

   Bomb b1(10,20); //it prints Constructor1 called  
   b1.setId(1000); 
   Bomb b2(1000); //it prints Constructor2 called 
   Bomb b3=b2; //It invokes the default copy constructor. 
   cout<<"b1 Id:"<<b1.getId()<<"\n";
   cout<<"b2 Id:"<<b2.getId()<<"\n";
   cout<<"b3 Id:"<<b3.getId()<<"\n";

} 
