#include<iostream>
using namespace std;
#define COUNT 10
class Item
{
	int id;
	int price;
	public:
	Item()
	{
		id = rand()/100;
		price = 100;
	}
	void setId(int i)
	{
		id = i;
	}
	int getId()
	{
		return id;
	}
};

void process(Item ti[COUNT])
{
	for (int i=0;i<COUNT;i++)
	{
		cout<<"Address of item "<<&ti[i]<<"\n";
		cout<<"Item processed "<<ti[i].getId()<<"\n";
	}
}

void lwprocess(Item *p)
{
        for (int i=0;i<COUNT;i++)
        {
		cout<<"Address of item "<<&p[i]<<"\n";
                cout<<"Item processed "<<p[i].getId()<<"\n";
        }
}

int main()
{

	Item il[COUNT];
	

	for (int i=0;i<COUNT;i++)
	{
		cout<<"Address of item "<<&il[i]<<"\n";
	}
	
	cout<<"\nSame Locations will be accessed\n";
	process(il);
	cout<<"\nSame Locations will be accessed\n";
	lwprocess(il);

}
