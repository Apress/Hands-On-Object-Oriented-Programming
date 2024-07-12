#include<string.h>
using namespace std;
class DeliveredOrder
{
    string d_oid;
    string dpid;
    string ddate;
    public:
       string getDoid();
       void setDoid(string id);
       string getDpid();
       void setDpid(string pid);
       string getDdate();
       void setDdate(string date);
};
string DeliveredOrder::getDoid()
{
	return d_oid;
}
void DeliveredOrder::setDoid(string id)
{
	d_oid = id;
}
string DeliveredOrder::getDpid()
{
    	return dpid;
}
void DeliveredOrder::setDpid(string pid)
{
    	dpid = pid;
}
string DeliveredOrder::getDdate()
{
	return ddate;
}
void DeliveredOrder::setDdate(string date)
{
	ddate = date;
}


