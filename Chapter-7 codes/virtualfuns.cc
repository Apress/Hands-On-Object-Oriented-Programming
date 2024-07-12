#include<iostream>
using namespace std;
class Phone
{
    public:
    virtual void call()
    {
   	 cout<<"Normal calling..\n";
    }

};
class Phonev2:public Phone
{
    public:
    void call()
    {
   	 cout<<"Internet calling ..\n";
    }
};

class Phonev3:public Phone
{
    public:
    void call()
    {
   	 cout<<"Video callig ..\n";
    }
};
void call(Phone *p)
{
    p->call();
}

int main()
{
    Phone p1;
    Phonev2 p2;
    Phonev3 p3;
    call(&p1);
    call(&p2);
    call(&p3);
}

