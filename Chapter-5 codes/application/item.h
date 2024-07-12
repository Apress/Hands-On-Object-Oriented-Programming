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

