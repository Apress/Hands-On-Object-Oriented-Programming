#include<string.h>
using namespace std;
class CancelledOrder
{
    string coid;
    string cdate;
    unsigned int refund;
    string rdate;
    public:
	
        string getCoid();
        void setCoid(string id);
    	string getCdate();
        void setCdate(string date);
        unsigned int getRefund();
        void setRefund(unsigned int irefund);
    	string getRdate();
        void setRdate(string date);

};
string CancelledOrder::getCoid()
{
    return coid;
}
void CancelledOrder::setCoid(string id)
{
        coid = id;
}

string CancelledOrder::getCdate()
{
    return cdate;
}
void CancelledOrder::setCdate(string date)
{
        cdate = date;
}

unsigned int CancelledOrder::getRefund()
{
        return refund;
}
void CancelledOrder::setRefund(unsigned int irefund)
{
        refund = irefund;
}

string CancelledOrder::getRdate()
{
	return rdate;
}
void CancelledOrder::setRdate(string irdate)
{
	rdate = irdate;
}


