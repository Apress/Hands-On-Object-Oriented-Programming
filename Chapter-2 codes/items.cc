#include<iostream>
#include<string.h>
using namespace std;
class Item
{
    string iid;
    string name;
    unsigned int price;
    unsigned int qty;
    string descr;
    public:
        string getIid();
        void setIid(string id);
        string getName();
        void setName(string iname);
        unsigned int getPrice();
        void setPrice(unsigned int iprice);
        unsigned int getQty();
        void setQty(unsigned int iqty);
    	string getDescr();
        void setDescr(string idescr);

};
string Item::getIid()
{
    return iid;
}
void Item::setIid(string id)
{
	iid = id;
}
string Item::getName()
{
	return name;
}
void Item::setName(string iname)
{
	name = iname;
}

unsigned int Item::getPrice()
{
	return price;
}
void Item::setPrice(unsigned int iprice)
{
	price = iprice;
}

unsigned int Item::getQty()
{
	return qty;
}
void Item::setQty(unsigned int iqty)
{
	qty = iqty;
}
string Item::getDescr()
{
	return descr;
}
void Item::setDescr(string idescr)
{
	descr = idescr;
}



int main()
{
	cout<<"Adding a new item:\n";
	Item i1;
	i1.setIid("Item1");
	i1.setName("Shirt");
	i1.setPrice(1000);
	i1.setQty(10);
	i1.setDescr("Fashion product");
	cout<<"New item added and its object is:i1 \n";
		
        cout<<"Browsing a specific item (i1) details:\n";
	cout<<"Item Name:"<<i1.getName()<<"\n";
	cout<<"Item Price:"<<i1.getPrice()<<"\n";
	cout<<"Item Qty:"<<i1.getQty()<<"\n";
	
        cout<<"Checking item availability:\n";
	if (i1.getQty() > 0)
	{
		cout<<"Item (i1) is available\n";
	}

	cout<<"Updating item (i1) price:\n";

	i1.setPrice(1200);
	cout<<"Item increased Price:"<<i1.getPrice()<<"\n";

}

