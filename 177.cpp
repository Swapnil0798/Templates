#include<iostream>
using namespace std;

template<class T>
void display(T arr[],int size)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}


int main()
{
   int arr[]={10,20,30,40,50};
   display(arr,5);
   
   float crr[]={10.11,20.11,30.11,40.11,50.11};
   display(crr,5);

   return 0;
}