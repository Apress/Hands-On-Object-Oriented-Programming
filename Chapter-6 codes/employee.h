#include<string.h>
using namespace std;
class Employee:public Person
{
    string eid;
    string did;
    string jdate;
    unsigned int salary;
    public:
       string getEid();
       void setEid(string ieid);
       string getDid();
       void setDid(string idid);
       string getJdate();
       void setJdate(string date);
       unsigned int getSalary();
       void setSalary(unsigned int sal);
};

string Employee::getEid()
{
    return eid;
}
void Employee::setEid(string ieid)
{
    eid = ieid ;
}
string Employee::getDid()
{
    return did;
}
void Employee::setDid(string idid)
{
    did = idid;
}
string Employee::getJdate()
{
    return jdate;
}
void Employee::setJdate(string date)
{
    jdate = date;
}
unsigned int Employee::getSalary()
{
    return salary;
}
void Employee::setSalary(unsigned int sal)
{
    salary = sal;
}


