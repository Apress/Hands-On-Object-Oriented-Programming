#include<iostream>
using namespace std;
int main()
{

	int b=200;

	int c=300;
	const int *const cp2c=&c;//must initialize
	cout<<*cp2c;
	cp2c=&b;
	*cp2c=*cp2c+1;

	return 0;

}
