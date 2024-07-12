#include<iostream>
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

int main()
{

	cout<<"Creating a customer object and setting all its field with suitable values:\n" ;

	Customer c1;
	c1.setCid("Customer1");
	c1.setName("John");
	char phone[11];
	strcpy(phone,"9000080000");
	c1.setPhone(phone);
	c1.setCity("Delhi");
	c1.setCountry("India");
	c1.setPin(500001);

	cout<<"Customer1 registerd successfully and object name: c1\n";
		
	
	cout<<"Retrieve Customer1 (c1) Phone number and City details:\n";
	cout<<"Customer Phone Number:"<<c1.getPhone()<<"\n";
	cout<<"Customer City:"<<c1.getCity()<<"\n";
	
	cout<<"Update Customer1 (c1) Phone number and Address details:\n";
	strcpy(phone,"9089089080");
	c1.setPhone(phone);
	cout<<"Customer Updated Phone Number:"<<c1.getPhone()<<"\n";

	cout<<"Customer Pin Number:"<<c1.getPin()<<"\n";
	c1.setPin(500002);
	cout<<"Customer Updated Pin Number:"<<c1.getPin()<<"\n";


}

