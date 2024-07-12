#include<string.h>
using namespace std;
class DeliveryPartner
{
    string did;
    string name;
    char phone[11];
    public:
       string getDid();
       void setDid(string id);
       string getName();
       void setName(string dname);
       char* getPhone();
       void setPhone(char dphone[11]);
};
string DeliveryPartner::getDid()
{
	return did;
}
void DeliveryPartner::setDid(string id)
{
	did = id;
}
string DeliveryPartner::getName()
{
    return name;
}
void DeliveryPartner::setName(string dname)
{
    name = dname;
}
char* DeliveryPartner::getPhone()
{
	return phone;
}
void DeliveryPartner::setPhone(char dphone[11])
{
	strcpy(phone, dphone);
}

