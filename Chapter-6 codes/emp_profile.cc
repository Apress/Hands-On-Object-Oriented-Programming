#include<iostream>
#include"personal.h"
#include"employee.h"
using namespace std;
int main()
{
	Person p1;
        p1.setName("Person");
        char phone[11];
        strcpy(phone,"9000080000");
        p1.setPhone(phone);
        p1.setCity("City1");
        p1.setCountry("Country1");
        p1.setPin(100001);

	cout<<"Person details:\n";
	cout<<"Name:"<<p1.getName()<<":\n";
	cout<<"Phone Number:"<<p1.getPhone()<<"\n";
	
	Employee e1;
        e1.setName("Employee");
        char phone1[11];
        strcpy(phone1,"9000080001");
        e1.setPhone(phone1);
        e1.setCity("City2");
        e1.setCountry("Country1");
        e1.setPin(100001);

	e1.setEid("E001");
	e1.setDid("D001");
	e1.setSalary(90000);
	cout<<"Employee details:\n";
	cout<<"EID:"<<e1.getEid()<<"\n";
	cout<<"Name:"<<e1.getName()<<"\n";
	cout<<"DID:"<<e1.getDid()<<"\n";
	cout<<"Salary:"<<e1.getSalary()<<"\n";
}
