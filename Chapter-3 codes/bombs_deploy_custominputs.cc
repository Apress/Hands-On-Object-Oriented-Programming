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
	Bomb(int bid, int bx, int by, int bstate);
	Bomb(fstream &ifile);
};
Bomb::Bomb()
{
	id = rand()%10000;
	x = rand()%100;
	y = rand()%100;
	state = 1;

}
Bomb::Bomb(int bid, int bx, int by, int bstate)
{
	id = bid;
	x = bx;
	y = by;
	state = bstate;
}


Bomb::Bomb(fstream &ifile)
{
	ifile>>id>>x>>y>>state;

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


        Bomb *pb[10]; 
        for (int i=0;i<10;i++) 
        { 
                pb[i] = new Bomb(i+1000,i*20,i*20,1); 
        } 
  	for (int i=0;i<10;i++) 
        { 
                cout<<pb[i]->getId()<<": ("<<pb[i]->getX()<<","<<pb[i]->getY()<<")"<<"Active"<<"\n"; 
        } 

 

        Bomb *fb[10];      
        fstream myfile; 
        myfile.open("BombsDeploy.txt",ios::in); 
        for (int i=0;i<10;i++) 
        { 
                fb[i] = new Bomb(myfile); 
        } 
    	for (int i=0;i<10;i++) 
        { 
                if (fb[i]->getState() == 1) 
                        cout<<fb[i]->getId()<<": ("<<fb[i]->getX()<<","<<fb[i]->getY()<<")"<<"Active"<<"\n"; 
        } 

        myfile.close(); 

} 
