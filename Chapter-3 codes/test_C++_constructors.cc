#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
class Bomb 
{ 

	unsigned int id; 
	int x,y; 
	int state; 
	public: 
	int getId() 
	{ 
		return id; 
	} 

	void setId(int tid) 
	{ 
		id = tid; 

	}
}; 

int main() 
{ 

   Bomb b1;  
   b1.setId(1000); 
   Bomb b2(b1); 
   cout<<"b1 Id:"<<b1.getId()<<"\n"; 
   cout<<"b2 Id:"<<b2.getId()<<"\n"; 
   Bomb b3=b2; 
   cout<<"b3 Id:"<<b3.getId()<<"\n"; 
  
   return 0; 

} 
