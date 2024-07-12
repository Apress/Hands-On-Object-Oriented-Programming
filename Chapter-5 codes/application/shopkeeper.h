#include<string.h>
using namespace std;
class Shopkeeper
{
    string sid;
    string name;
    char phone[11];
    string city;
    string country;
    unsigned int pin;
    public:
       string getSid();
       void setSid(string id);
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
string Shopkeeper::getSid()
{
	return sid;
}
void Shopkeeper::setSid(string id)
{
	sid = id;
}
string Shopkeeper::getName()
{
    return name;
}
void Shopkeeper::setName(string cname)
{
    name = cname;
}
char* Shopkeeper::getPhone()
{
	return phone;
}
void Shopkeeper::setPhone(char cphone[11])
{
	strcpy(phone, cphone);
}
string Shopkeeper::getCity()
{
    return city;
}
void Shopkeeper::setCity(string ccity)
{
    city = ccity;
}
string Shopkeeper::getCountry()
{
    return country;
}
void Shopkeeper::setCountry(string ccountry)
{
    country = ccountry;
}

unsigned int Shopkeeper::getPin()
{
    return pin;
}
void Shopkeeper::setPin(unsigned int cpin)
{
    pin = cpin;
}

