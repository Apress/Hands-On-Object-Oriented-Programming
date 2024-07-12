#include <iostream>
#include <thread>
#include <vector>
#include <unistd.h>
#include <bits/stdc++.h>
#include <time.h>
#include "gun.h"
#include "bomb.h"
#include "coin.h"
#include "player.h"
#define COUNT 10
#define MAXSTEPS 15
using namespace std;

float distanceBetween(Player *p1, Bomb *p2)
{
        int xdisp = p1->getX()-p2->getX();
        int ydisp = p1->getY()-p2->getY();
        return sqrt((xdisp*xdisp+ydisp*ydisp));
}
float distanceBetween(Player *p1, Gun *p2)
{
        int xdisp = p1->getX()-p2->getX();
        int ydisp = p1->getY()-p2->getY();
        return sqrt((xdisp*xdisp+ydisp*ydisp));
}
float distanceBetween(Player *p1, Coin *p2)
{
        int xdisp = p1->getX()-p2->getX();
        int ydisp = p1->getY()-p2->getY();
        return sqrt((xdisp*xdisp+ydisp*ydisp));
}





void playerobserves(Player *p1, Bomb b[COUNT], Gun g[COUNT], Coin c[COUNT])
{
	cout<<"\nPlayer "<<p1->getId()<<"at"<<p1->getX()<<","<<p1->getY()<<"\n";
	for (int i=0;i<COUNT;i++)	
	{
		cout<<"Bomb is "<<distanceBetween(p1,&b[i])<<"meters away\n";
	}

	for (int i=0;i<COUNT;i++)	
	{
		cout<<"Gun is "<<distanceBetween(p1,&g[i])<<"meters away\n";
	}

	for (int i=0;i<COUNT;i++)	
	{
		cout<<"Coin is "<<distanceBetween(p1,&c[i])<<"meters away\n";
	}

}

void playeractbombs(Player *p1, Bomb b[COUNT])
{
	enum states {DEFUSED, ACTIVE};
	cout<<"\nPlayer "<<p1->getId()<<"at"<<p1->getX()<<","<<p1->getY()<<"\n";
	float dist = 5.0;

        for (int i=0;i<COUNT;i++)
        {
		if (distanceBetween(p1,&b[i])<9.0)
		{
			cout<<"Player is palnning to defuse the bomb \n";

		}
		if (distanceBetween(p1,&b[i])<4.0&&b[i].getState()==ACTIVE)
                {
                        cout<<"\nPlayer Id: "<<p1->getId()<<" defused a bomb \n";
			b[i].setState(DEFUSED);
			p1->setBomb(&b[i]);


                }
		if (distanceBetween(p1,&b[i])==0.0 && b[i].getState()==ACTIVE)
		{
			cout<<"Player was blasted with the bomb";
		}
        }


}


void playeractguns(Player *p1, Gun g[10])
{
	enum states {NOT_AVAILABLE, AVAILABLE};
	cout<<"\nPlayer "<<p1->getId()<<"at"<<p1->getX()<<","<<p1->getY()<<"\n";
        float dist = 5.0;

        for (int i=0;i<COUNT;i++)
        {
                if (distanceBetween(p1,&g[i])<8.0)
                {
                        cout<<"Player running towards the Guns \n";

                }
                if (distanceBetween(p1,&g[i])<=2.0 && g[i].getState()==AVAILABLE)
                {
                        cout<<"Player is collecting the gun \n";
			g[i].setState(NOT_AVAILABLE);
			p1->setGun(&g[i]);
                }
		if (p1->hasGun(&g[i])==true)
		{
			g[i].fire();
			cout<<"\nPlayer Id: "<<p1->getId()<<" is firing ..\n";
		}
        }


}

void playeractcoins(Player *p1, Coin c[COUNT])
{
	enum states {COLLECTED, AVAILABLE};
	cout<<"\nPlayer "<<p1->getId()<<"at"<<p1->getX()<<","<<p1->getY()<<"\n";
        float dist = 5.0;

        for (int i=0;i<10;i++)
        {
                if (distanceBetween(p1,&c[i])<12.0)
                {
                        cout<<"Player is running towards coins \n";

                }
                if (distanceBetween(p1,&c[i])<=4.0 && c[i].getState()==AVAILABLE)
                {
                        cout<<"\nPlayer Id: "<<p1->getId()<<" collected a coin \n";
			c[i].setState(COLLECTED);
			p1->setCoin(&c[i]);
                }
        }


}


void playermoves(Player *p1, Bomb b[COUNT], Gun g[COUNT], Coin c[COUNT])
{
	playerobserves(p1,b,g,c);
	sleep(1);
	for (int i=0;i<MAXSTEPS;i++)
	{
		playeractbombs(p1,b);
		playeractguns(p1,g);
		playeractcoins(p1,c);
		p1->walk();
	}
	p1->stats();
}
void enemymoves(Player *e1, Bomb b[COUNT], Gun g[COUNT], Coin c[COUNT])
{
        playerobserves(e1,b,g,c);
        sleep(1);
        for (int i=0;i<MAXSTEPS;i++)
        {
                playeractguns(e1,g);
                playeractcoins(e1,c);
                playeractbombs(e1,b);
                e1->walk();
        }
        e1->stats();
}


int main()
{
	
	Player p; Player e;
	Bomb b[COUNT];
	Gun g[COUNT];
	Coin c[COUNT];
	playermoves(&p,b,g,c);
	enemymoves(&e,b,g,c);
	return 0;
}

