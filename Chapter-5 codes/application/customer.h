#include<string.h>
using namespace std;
class Customer
{
    string cid;
    string name;
    char phone[11];
    string city;
    string country;
    unsigned int pin;
    public:
       string getCid();
       void setCid(string id);
       string getName();
       void setName(string cname);
       char* getPhone();
       void setPhone(char cphone[11]);
       string getCity();
       void setCity(string ccity);
       string getCountry();
       void setCountry(string ccountry);
       unsigned int getPin();
       void setPin(unsigned int pin);
};
string Customer::getCid()
{
	return cid;
}
void Customer::setCid(string id)
{
	cid = id;
}
string Customer::getName()
{
    return name;
}
void Customer::setName(string cname)
{
    name = cname;
}
char* Customer::getPhone()
{
	return phone;
}
void Customer::setPhone(char cphone[11])
{
	strcpy(phone, cphone);
}
string Customer::getCity()
{
    return city;
}
void Customer::setCity(string ccity)
{
    city = ccity;
}
string Customer::getCountry()
{
    return country;
}
void Customer::setCountry(string ccountry)
{
    country = ccountry;
}

unsigned int Customer::getPin()
{
    return pin;
}
void Customer::setPin(unsigned int cpin)
{
    pin = cpin;
}


