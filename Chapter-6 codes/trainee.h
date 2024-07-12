#include<string.h>
using namespace std;
class Trainee:public Employee
{
    string edate;
    string grade;
    public:
       string getEdate();
       void setEdate(string date);
       string getGrade();
       void setGrade(string igrade);
};

string Trainee::getEdate()
{
    return edate;
}
void Trainee::setEdate(string date)
{
    edate = date;
}
string Trainee::getGrade()
{
    return grade;
}
void Trainee::setGrade(string igrade)
{
    grade = igrade;
}
