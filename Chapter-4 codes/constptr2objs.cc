#include<iostream>
using namespace std;
class Player
{
	int power;
	int id;
	public:
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
Player* whoisPowerful(Player  *p1, Player *p2)
{
	p1=p2;
	p1->setId(100);
	if (p1->getPower() >= p2->getPower())
	{
		return p1;
	}
	else
	{
		return p2;
	}	

}


Player* cwhoisPowerful(Player *const p1, Player *const p2)
{
//        p1=p2;
        if (p1->getPower() > p2->getPower())
        {
                return p1;
        }
        else
        {
                return p2;
        }

}

int main()
{
	Player p1,p2,p3;
	p1.setId(100);
	p1.setPower(1);
	p2.setId(200);
	p2.setPower(2);
	p3.setId(300);
	p3.setPower(3);

//	Player *pa = whoisPowerful(&p1,&p2);
//	cout<<pa->getId()<<"is powerful\n";
	
	Player *pa = cwhoisPowerful(&p1,&p2);
	cout<<pa->getId()<<"is powerful\n";



	return 0;
	
}
