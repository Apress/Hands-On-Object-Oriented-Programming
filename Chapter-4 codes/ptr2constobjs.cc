#include<iostream>
using namespace std;
class Player
{
	public:
	int power;
	int id;

	void setId(int rid)
	{
		id = rid;
	}
	int getId()
	{
		return id;
	}
	void setPower(int ipower)
	{
		power = ipower;
	}
	int getPower()
	{
		return power;
	}

};



int main()
{

	Player p2;
	p2.setId(100);
	p2.setPower(1);
	Player *pptr2;
	pptr2=&p2;
	pptr2->setId(0);
	cout<<"Ptr changed the player id"<<pptr2->getId()<<"\n";

	Player p1;
	p1.setId(100);
	p1.setPower(1);
	const Player *pptr1;
	pptr1=&p1;
	cout<<"Player id"<<pptr1->id<<"\n";
//	pptr1->id=200;
	cout<<"player id"<<pptr2->getId()<<"\n";
	return 0;
	
}
