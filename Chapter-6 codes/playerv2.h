// C++ program to demonstrate
// multithreading using three
// different callables.
#include <iostream>
#include <vector>
#include <unistd.h>
#include <bits/stdc++.h>
using namespace std;

class Playerv2:public Player
{

	vector<TimeBomb> tbv;
	vector<AutoGun> agv;
	public:
	void fly()
	{
		cout<<"He can fly\n";
		
		x = x*10;
		y = y*10;

	}
	void swim()
	{
		cout<<"He can swim\n";
	
		x = x+3;
		y = y+3;

	}
	
	void setTimerBomb(TimeBomb *b)
	{
		tbv.push_back(*b);
	}
	void setAutoGun(AutoGun *g)
        {
                agv.push_back(*g);
        }
	void stats()
	{

		cout<<"\nPlayer: "<<getId()<<" Time Bombs:"<<tbv.size()<<" Auto Guns:"<<agv.size()<<"\n";
	}
};
