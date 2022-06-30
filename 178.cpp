#include<iostream>
using namespace std;

template<class T>
T displaymax(T arr[],int size)
{
    int i=0;
    T imax=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i] > imax)
        {
            imax=arr[i];
        }
    }
     return imax; 
}


int main()
{
   
   int brr[]={10,20,30,40,50};
   int iret= displaymax(brr,5);
   cout<<iret<<endl;
   
   
   float crr[]={10.11,20.11,30.11,40.11,50.11};
   float fret=displaymax(crr,5);
   cout<<fret;
   
   return 0;
}