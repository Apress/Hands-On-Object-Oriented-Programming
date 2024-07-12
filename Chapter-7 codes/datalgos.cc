#include<iostream>
using namespace std;
class DataAlgorithms
{
    public:
    int maximum(int *d,int len)
    {
   	 int max;
   	 max = d[0];
   	 for (int i=0;i<len;i++)
   	 {
   		 if (d[i]>=max)
   		 {
   			 max = d[i];
   		 }
   	 }
   	 return max;
    }
    float maximum(float *d,int len)
    {
   	 float max;
   	 max = d[0];
   	 for (int i=0;i<len;i++)
   	 {
   		 if (d[i]>=max)
   		 {
   			 max = d[i];
   		 }
   	 }
   	 return max;
    }

    string maximum(string *d,int len)
    {
   	 string max;
   	 max = d[0];
   	 for (int i=0;i<len;i++)
   	 {
   		 if (d[i].length()>=max.length())
   		 {
   			 max = d[i];
   		 }
   	 }
   	 return max;
    }
};

int main()
{
	int d1[10] = {10,20,40,50,90,70,60,80,30,0};
	float d2[10] = {10.9,20.9,40.9,50.9,90.9,70.9,60.9,80.9,30.9,0.9};
	string d3[10] = {"abc", "abcd", "ab", "abcdefghijk", "a","abcdefg","c","d","e","f"};
	DataAlgorithms d;
	int m1 = d.maximum(d1,10);
	cout<<"Max "<<m1<<"\n";
	float m2 = d.maximum(d2,10);
	cout<<"Max "<<m2<<"\n";
	string m3 = d.maximum(d3,10);
	cout<<"Max "<<m3<<"\n";

}

