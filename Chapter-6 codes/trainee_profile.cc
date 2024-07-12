#include<iostream>
#include"personal.h"
#include"employee.h"
#include"trainee.h"
using namespace std;
int main()
{
	
	Trainee t1;
        t1.setName("Trainee");
        char phone1[11];
        strcpy(phone1,"9000080001");
        t1.setPhone(phone1);
        t1.setCity("City2");
        t1.setCountry("Country1");
        t1.setPin(100001);

	t1.setEid("T001");
	t1.setDid("D001");
	t1.setJdate("JDATE1");
	t1.setSalary(10000);
	cout<<"Trainee details:\n";
	cout<<"TID:"<<t1.getEid()<<"\n";
	cout<<"Name:"<<t1.getName()<<"\n";
	cout<<"DID:"<<t1.getDid()<<"\n";
	cout<<"Stipend:"<<t1.getSalary()<<"\n";
	t1.setEdate("EDATE1");
	t1.setGrade("Grade-1");

	cout<<"Training End date:"<<t1.getEdate()<<"\n";
	cout<<"Grade:"<<t1.getGrade()<<"\n";
}
