#include<iostream>
using namespace std;
class Player
{
	static int power;
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
	static void setPower(int ipower)
	{
		power = ipower;
	}
	static int getPower()
	{
		return power;
	}

};
int Player::power;
int main()
{
	enum powerstate {DISABLE,ENABLE};
	Player p1,p2,p3;
	p1.setId(100);
	p2.setId(200);	
	p3.setId(300);
	cout<<"Start with enabling power for all players to fly\n";
	Player::setPower(ENABLE);

	if (p1.getPower() == ENABLE)
	{
		cout<<"Player1 can fly\n";
	}
	if (p2.getPower() == ENABLE)
	{
		cout<<"Player2 can fly\n";
	}
	if (p3.getPower() == ENABLE)
	{
		cout<<"Player3 can fly\n";
        }

	cout<<"Disable flying power for all player\n";
	Player::setPower(DISABLE);
        if (p1.getPower() == ENABLE || p2.getPower() == ENABLE || p3.getPower() == ENABLE )
        {
                cout<<"All players can fly\n";
        }
	else
	{	
		cout<<"No player can fly! Power is disabled.\n";
	}


	return 0;
	
}
