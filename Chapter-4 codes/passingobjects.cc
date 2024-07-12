#include<iostream>
using namespace std;
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

void changeItem(Item i)
{
	i.setId(100);
}
void changeItemwPtr(Item *i)
{
	i->setId(100);
}
void changeItemwRef(Item &i)
{
	i.setId(100);
}

int main()
{

	Item i1;
	changeItem(i1);
	cout<<"Item id"<<i1.getId()<<"\n";

	changeItemwPtr(&i1);
	cout<<"Item id"<<i1.getId()<<"\n";

	changeItemwRef(i1);
	cout<<"Item id"<<i1.getId()<<"\n";

}
