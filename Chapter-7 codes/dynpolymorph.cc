#include<iostream>
using namespace std;
class Phone
{
    public:
    virtual void call()=0;
    virtual void answer()=0;
    virtual void message()=0;


};
class Phonev2:public Phone
{
    public:
    void call()
    {
   	 cout<<"2G calling ..\n";
    }
    void answer()
    {
   	 cout<<"2G call answering ..\n";
    }
    void message()
    {
   	 cout<<"Sending text message..\n";
    }
};

class Phonev3:public Phone
{
    public:
    void call()
    {
   	 cout<<"3G callig ..\n";
    }
    void answer()
    {
   	 cout<<"3G call answering ..\n";
    }
    void message()
    {
   	 cout<<"Internet data messaging..\n";
    }
};

class Phonev4:public Phone
{
    	public:
    	void call()
    	{
            	cout<<"4G callig ..\n";
    	}
    	void answer()
    	{
            	cout<<"4G call answering ..\n";
    	}
    	void message()
    	{
            	cout<<"Internet video messaging..\n";
    	}
};
void call(Phone *p)
{
    p->call();
}
void answer(Phone *p)
{
    p->answer();
}
void message(Phone *p)
{
    p->message();
}
int main()
{
    Phonev2 p2;
    Phonev3 p3;
    Phonev4 p4;
    call(&p2);
    call(&p3);
    call(&p4);
    answer(&p2);
    answer(&p3);
    answer(&p4);
    message(&p2);
    message(&p3);
    message(&p4);

}

