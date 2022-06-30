#include<iostream>
using namespace std;

void swapA(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;

}
int main()
{
   int no1=10,no2=21;

  cout<<"before swap data is: "<<no1<<no1<<endl;

  swapA(&no1,&no2);

  cout<<"after swap: "<<no1<<no2<<endl;




    return 0;
}