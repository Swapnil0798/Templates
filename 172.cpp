#include<iostream>
using namespace std;

void swapR(int &p,int &q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;

}
//swapping two no 
int main()
{
   int no1=10,no2=21;

  cout<<"before swap data is: "<<no1<<" "<<no2<<endl;

  swapR(no1,no2);

  cout<<"after swap: "<<no1<<" "<<no2<<endl;

    return 0;
}