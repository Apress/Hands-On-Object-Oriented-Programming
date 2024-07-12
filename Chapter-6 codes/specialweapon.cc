#include<iostream>
#include<vector>
#include"bomb.h"
#include"gun.h"
#include"autogun.h"
#include"timebomb.h"

class SpecialWeapon
{
	AutoGun ag;
	TimeBomb tb[10];
	Bomb b[10];
	Gun g;
	public:
	void setTimeBomb()
	{
		for(int i=0;i<10;i++)
		{
			tb[i].setState(1);
		}
	}
	void setBomb()
	{
		for(int i=0;i<10;i++)
		{
			b[i].setState(1);
		}
	}

	void resetTimeBomb()
	{
		for(int i=0;i<10;i++)
		{
			tb[i].setState(0);
		}
	}
	void resetBomb()
	{
		for(int i=0;i<10;i++)
		{
			b[i].setState(0);
		}
	}
	void gunFire()
	{
		g.fire();
	}
	void autoGunFire()
	{
		ag.fire();
	}
	void setGunBullets(int bullets)
	{
		g.setBullets(bullets);
	}
	void setAutoGunBullets(int bullets)
	{
		ag.setBullets(bullets);
	}
	int getGunBullets()
	{
		return g.getBullets();
	}
	int getAutoGunBullets()
	{
		return ag.getBullets();
	}

};
int main()
{
    	SpecialWeapon spw;

    	spw.setTimeBomb();
    	spw.setBomb();
    	cout<<"Special Weapon's Gun Bullets:"<<spw.getGunBullets()<<"\n";
    	cout<<"Special Weapon's Auto Gun Bullets:"<<spw.getAutoGunBullets()<<"\n";
    	spw.gunFire();
    	spw.autoGunFire();
    	cout<<"After firing Special Weapon's Gun Bullets:"<<spw.getGunBullets()<<"\n";
    	
    	
    	cout<<"After firing Special Weapon's Auto Gun Bullets:"<<spw.getAutoGunBullets()<<"\n";

}

