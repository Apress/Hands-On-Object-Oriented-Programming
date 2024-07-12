#include<iostream>
using namespace std;
class Coin
{
	int state;
        int x,y,value;
	enum states {COLLECTED, AVAILABLE};
        public:
        Coin()
        {
                x = rand()%9+8;
                y = rand()%9+8;
                value = rand()%100;
		state = AVAILABLE;
        }
        int getX()
        {
                return x;
        }
	int getY()
	{
		return y;
	}
        int getValue()
        {
                return value;
        }
        void setValue(int ival)
        {
                value = ival;
        }
	int getState()
        {
                return state;
        }
        void setState(int istate)
        {
                state = istate;
        }
	Coin operator+(Coin c2)
	{
		Coin c3;
		c3.value = value + c2.value;
		return c3;
	}
	friend bool operator>(Coin &c1, Coin &c2);
	friend bool operator<(Coin &c1, Coin &c2);
	friend bool operator==(Coin &c1, Coin &c2);
	friend ostream& operator<<(ostream &o, Coin &c);



};
bool operator>(Coin &c1, Coin &c2)
{
	if(c1.getValue()>c2.getValue())
	{
		return true;
	}
	return false;
}

bool operator<(Coin &c1, Coin &c2)
{
	if(c1.getValue()<c2.getValue())
	{
		return true;
	}
	return false;
}

bool operator==(Coin &c1, Coin &c2)
{
	if(c1.getValue()==c2.getValue())
	{
		return true;
	}
	return false;
}
ostream& operator<<(ostream& o, Coin &c)
{
	o<<c.getValue();
	return o;
}
int main()
{
	Coin c1;
	Coin c2;
	Coin c3;
	c3 = c1+c2;

	cout<<"Coin1 value"<<c1.getValue()<<"\n";
	cout<<"Coin2 value"<<c2.getValue()<<"\n";
	cout<<"Coin3 value"<<c3.getValue()<<"\n";
	if (c1>c2)
	{
		cout<<"Coin1 is high value"<<c1.getValue()<<"\n";
	}

	if (c1<c3)
	{
		cout<<"Coin3 is high value"<<c3.getValue()<<"\n";
	}

	if (c1==c2)
	{
		cout<<"Coin1 and Coin 2 are having same value"<<c1.getValue()<<"\n";
	}

	Coin c[10];
	Coin magic;
	for (int i=0;i<10;i++)
	{
		magic = magic+c[i];
	}
	cout<<"Magic coin value"<<magic<<"\n";
}
