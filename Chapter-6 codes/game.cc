#include<iostream>
#include<vector>
#include"bomb.h"
#include"gun.h"
#include"coin.h"
#include"player.h"
#include"timebomb.h"
#include"autogun.h"
#include"playerv2.h"
#include"spweapon.h"
using namespace std;
int main()
{

	Bomb b1,b2;
	Gun g1,g2;
	Player p1;
	p1.setBomb(&b1);
	p1.setGun(&g1);
	p1.walk();
	cout<<"After walking Player1 position: "<<p1.getX()<<" "<<p1.getY()<<"\n";
	cout<<"Player1 gun state: "<<g1.getState()<<"\n";
	cout<<"Player1 gun's bullets: "<<g1.getBullets()<<"\n";
	g1.fire();
	cout<<"After firing Player1 gun's bullets: "<<g1.getBullets()<<"\n";
	if (b1.getState() == 1)
	{
  	      cout<<"Player1 bomb is active\n";
	}
	Playerv2 p2;
	TimeBomb tb;
	AutoGun ag;
	p2.setAutoGun(&ag);
	p2.setTimerBomb(&tb);
	p2.setBomb(&b2);
	p2.setGun(&g2);
	p2.walk();
	cout<<"After walking Player2 position: "<<p2.getX()<<" "<<p2.getY()<<"\n";
	cout<<"Player2 gun state: "<<g2.getState()<<"\n";
	g2.fire();
	cout<<"After firing Player2 gun's bullets: "<<g2.getBullets()<<"\n";
	cout<<"Player2 gun state: "<<ag.getState()<<"\n";
	cout<<"Player2 Autho gun's bullets: "<<ag.getBullets()<<"\n";
	ag.fire();
	cout<<"After firing Player2 Autho gun's bullets: "<<ag.getBullets()<<"\n";
	if (b2.getState() == 1)
	{
  	      cout<<"Player2 bomb is active\n";
	}
	cout<<"Player2 time bomb timer: "<<tb.getTimer()<<"\n";
	p2.fly();
	cout<<"After flying Player2 position: "<<p2.getX()<<" "<<p2.getY()<<"\n";
	p2.swim();
	cout<<"After swimming Player2 position: "<<p2.getX()<<" "<<p2.getY()<<"\n";
}

