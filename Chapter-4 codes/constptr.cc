#include<iostream>
using namespace std;
int main()
{
	int a=100;

	int b=200;
	int *const p=&b;//must initalize
	cout<<"Accessing b through p"<<*p<<"\n";
//	p=&a;
	cout<<"Accessing a through p"<<*p;

	return 0;

}
