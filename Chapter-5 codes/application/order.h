#include<string.h>
using namespace std;
class Order
{
    string oid;
    string cid;
    string iid;
    unsigned int qty;
    unsigned int cost;
    string odate;
    string status;
    static int count;
    public:
	
        string getOid();
        void setOid(string id);
        string getCid();
        void setCid(string id);
        string getIid();
        void setIid(string id);
        unsigned int getQty();
        void setQty(unsigned int iqty);
        unsigned int getCost();
        void setCost(unsigned int icost);
    	string getOdate();
        void setOdate(string date);
    	string getStatus();
        void setStatus(string istatus);
	static void updateCount();
	static int getCount();

};
int Order::count;
void Order::updateCount()
{
        count = count+1;
}
int Order::getCount()
{
        return count;
}

string Order::getOid()
{
    return oid;
}
void Order::setOid(string id)
{
        oid = id;
}

string Order::getCid()
{
    return cid;
}
void Order::setCid(string id)
{
        cid = id;
}

string Order::getIid()
{
    return iid;
}
void Order::setIid(string id)
{
	iid = id;
}
unsigned int Order::getQty()
{
        return qty;
}
void Order::setQty(unsigned int iqty)
{
        qty = iqty;
}


unsigned int Order::getCost()
{
	return cost;
}
void Order::setCost(unsigned int icost)
{
	cost = icost;
}

string Order::getOdate()
{
	return odate;
}
void Order::setOdate(string iodate)
{
	odate = iodate;
}
string Order::getStatus()
{
	return status;
}
void Order::setStatus(string istatus)
{
	status = istatus;
}

