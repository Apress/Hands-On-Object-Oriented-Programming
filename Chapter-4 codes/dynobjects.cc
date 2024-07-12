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


void process(Item *p)
{
	if(p!=NULL)
        for (int i=0;i<COUNT;i++)
        {
		cout<<"Address of item "<<&p[i]<<"\n";
                cout<<"Item processed "<<p[i].getId()<<"\n";
        }
}

int main()
{

	Item *il;
	il = new Item[COUNT];
	cout<<"main item details\n";
	if(il!=NULL)
	for (int i=0;i<COUNT;i++)
        {
                cout<<"Address of item "<<&il[i]<<"\n";
                cout<<"Item processed "<<il[i].getId()<<"\n";
        }

	cout<<"inside function item details\n";
	process(il);
	free(il);
	


}
