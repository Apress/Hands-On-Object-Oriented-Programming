#include<iostream>
using namespace std;
class Phone
{
    public:
    void call()
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

int main()
{
	Phone p1;
	Phonev2 p2;
	Phonev3 p3;
	p1.call();
	p2.call();
	p3.call();
}

