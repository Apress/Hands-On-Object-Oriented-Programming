#include<iostream>
using namespace std;
int main()
{
	int a=100;
	a=a+50;
	cout<<"a value"<<a<<"\n";

	const int *ptr=&a;
	cout<<*ptr;
	*ptr=*ptr+1;

	cout<<"Accessing a through ptr"<<*ptr<<"\n";;
	return 0;

}
