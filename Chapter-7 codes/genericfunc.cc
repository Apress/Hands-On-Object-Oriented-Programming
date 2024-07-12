#include<iostream>
using namespace std;
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
	friend bool operator>(Coin &c1, Coin &c2);
	friend bool operator<(Coin &c1, Coin &c2);
	friend bool operator==(Coin &c1, Coin &c2);



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

template<typename T>
bool inIncreasingOrder(T *c, int count)
{
    bool order=true;
    for (int i=0;i<count-1;i++)
    {
   	 if (c[i]>c[i+1])
   	 {
   		 order = false;
   		 return order;
   	 }

    }
    return order;
}
template<typename T>
T maxValue(T *c, int count)
{
    T maxval = c[0];
    T max;
    for (int i=1; i<count; i++)
    {
   	 if (c[i]>maxval || c[i]==maxval)
   	 {
   		 maxval = c[i];
   		 max = c[i];
   	 }
    }
    return max;
}
int main()
{

    int v[10];
    for (int i=0;i<10;i++)
    {
   	 	v[i] = i*20;
    }
    bool ret= inIncreasingOrder(v,10);
    if (ret == true)
    {
   	 	cout<<"Values are in increasing order\n";
    }
    else
    {
   	 	cout<<"Values are not in increasing order\n";
    }

    int maxint = maxValue(v,10);
    cout<<"Max int value  of array is "<<maxint<<"\n";
    float fv[10];
    for (int i=0;i<10;i++)
    {
            fv[i] = i*10.5;
    }
    ret= inIncreasingOrder(fv,10);
    if (ret == true)
    {
            cout<<"Values are in increasing order\n";
    }
    else
    {
            cout<<"Values are not in increasing order\n";
    }

    float maxfloat = maxValue(fv,10);
    cout<<"Max float value  of array is "<<maxfloat<<"\n";

    Coin c[10];
    bool res= inIncreasingOrder(c,10);
    if (res == true)
    {
   	 	cout<<"Coins are in increasing order\n";
    }
    Coin max = maxValue(c,10);
    cout<<"Max valued coin is"<<max;


}


