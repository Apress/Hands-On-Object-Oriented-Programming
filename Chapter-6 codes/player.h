// C++ program to demonstrate
// multithreading using three
// different callables.
#include <iostream>
#include <vector>
#include <unistd.h>
#include <bits/stdc++.h>
using namespace std;

class Player
{
	protected:
	int id;
	int x;
	int y;
	int state;
	enum states {DEAD, LIVE};
	vector<Bomb> bv;
	vector<Coin> cv;
	vector<Gun> gv;

	public:
	Player()
	{
		id = rand()%100;
		x = rand()%9;
		y = rand()%9;
		state = LIVE;
	}
	void walk()
	{
		x = x+1;
		y = y+1;
	}
	void setId(int iid)
	{
		id = iid;
	}
	int getId()
	{
		return id;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	int getState()
	{
		return state;
	}
	void setState(int istate)
	{
		state = istate;
	}
	void setBomb(Bomb *b)
	{
		bv.push_back(*b);
	}
	void setGun(Gun *g)
        {
                gv.push_back(*g);
        }
	void setCoin(Coin *c)
	{
		cv.push_back(*c);
	}
	void stats()
	{
		cout<<"\nPlayer: "<<id<<" Bombs:"<<bv.size()<<" Coins:"<<cv.size()<<" Guns:"<<gv.size()<<"\n";
	}
	bool hasGun(Gun *g)
	{
		for (Gun g1: gv)  
		{
			if (g1.getX() == g->getX() && g1.getY() == g->getY())
			{
				return true;
			}
		}
		return false;
	}
	
};
