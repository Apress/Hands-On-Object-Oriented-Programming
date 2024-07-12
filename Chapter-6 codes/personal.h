#include<string.h>
using namespace std;
class Person
{
    string name;
    char phone[11];
    string city;
    string country;
    unsigned int pin;
    public:
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
string Person::getName()
{
    return name;
}
void Person::setName(string cname)
{
    name = cname;
}
char* Person::getPhone()
{
	return phone;
}
void Person::setPhone(char cphone[11])
{
	strcpy(phone, cphone);
}
string Person::getCity()
{
    return city;
}
void Person::setCity(string ccity)
{
    city = ccity;
}
string Person::getCountry()
{
    return country;
}
void Person::setCountry(string ccountry)
{
    country = ccountry;
}

unsigned int Person::getPin()
{
    return pin;
}
void Person::setPin(unsigned int cpin)
{
    pin = cpin;
}


