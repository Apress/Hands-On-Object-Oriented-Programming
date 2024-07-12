#include<iostream>
using namespace std;
class Registration
{
	static int count;
	int id;
	public:
	void setId(int rid)
	{
		id = rid;
	}
	int getId()
	{
		return id;
	}
	static void update()
	{
		count = count+1;
	}
	static int getCount()
	{
		return count;
	}

};
int Registration::count;
int main()
{
	Registration r1,r2,r3;
	r1.setId(100);
	r1.update();
	r2.setId(200);	
	r2.update();
	r3.setId(200);
	r3.update();

	cout<<"Registrations list:"<<r1.getId()<<" "<<r2.getId()<<" "<<r3.getId()<<"\n";
	cout<<"Total number of registrations "<< Registration::getCount();


	return 0;
	
}
