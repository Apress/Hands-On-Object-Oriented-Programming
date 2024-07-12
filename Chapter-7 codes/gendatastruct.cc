#include<iostream>
#include<stdlib.h>
#include"coins.h"
using namespace std;
template<typename T>
class GenericDataStructure
{
    
    T *storage;
    int size;
    public:
    GenericDataStructure()
    {
   	 storage = (T *) malloc(1 * sizeof(T));
   	 size  = 1;
    }
 	~GenericDataStructure()
    {
   	 storage = NULL;
   	 free(storage);
    }


    void insert(T e)
    {
   	 if (size == 1)
   	 {
   		 if (storage!=NULL)
   		 {
   			 storage[0] = e;
   			 size = size+1;
   		 }
   	 }
   	 else
   	 {
   		 storage = (T *) realloc(storage, (size+1) * sizeof(T));
   		 if (storage!=NULL)
   		 {
   			 storage[size-1] =  e;
   			 size = size+1;
   		 }
   	 }

    }
    bool search(T e)
    {
   	 for (int i=0;i<size-1;i++)
   	 {
   		 if (storage[i] == e)
   			 return true;
   	 }
   	 return false;
    }
    void print()
    {
   	 for (int i=0;i<size-1;i++)
   	 {
   		 cout<<storage[i]<<"\n";
   	 }
    }

    int getSize()
    {
   	 return size-1;
    }
};


int main()
{
    GenericDataStructure<int> gd;
    gd.insert(100);
    gd.insert(10);
    gd.insert(300);
    gd.insert(40);
    gd.insert(50);
    gd.insert(60);
    gd.insert(70);
    gd.insert(400);
    cout<<"Size of GD"<<gd.getSize()<<"\n";
    gd.print();
    
    Coin c[10];
    GenericDataStructure<Coin> gdc;
    for (int i=0;i<10;i++)
    {
   	 	c[i].setValue(i);
   	 	gdc.insert(c[i]);
    }
    gdc.print();
    Coin sc;
    sc.setValue(5);
    if(gdc.search(sc) ==  true)
    {
   	 	cout<<"Coin found\n";
    }


    sc.setValue(6);
    if(gdc.search(sc) ==  true)
    {
   	 	cout<<"Coin found\n";
    }
}

