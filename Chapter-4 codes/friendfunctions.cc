#include<iostream>
using namespace std;
class Player1
{
	int id;
	int x,y;
	int sx,sy;

	public:
	void setId(int iid)
	{
		id = iid;
	}
	int getId()
	{
		return id;
	}
	void setX(int ix)
	{
		x = ix;
		sx = x*3;

	}
	void setY(int iy)
	{
		y = iy;
		sy = y*3;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	friend void friendToPlayer(Player1 *p);
	
};
void friendToPlayer(Player1 *p1)
{
	cout<<"Player id:"<<p1->id<<" secret x "<<p1->sx<<" secret y "<<p1->sy;
}
int main()
{
	Player1 p1;
//	cout<<"Secret accesing"<<p1.sx;
	p1.setId(100);
	p1.setX(10);
	p1.setY(10);
	friendToPlayer(&p1);
}

