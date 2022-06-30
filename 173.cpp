#include<iostream>
using namespace std;

template<class T>
void swapR(T &p,T &q)
{
    T temp;
    temp=p;
    p=q;
    q=temp;

}
//swapping two no,character,float using template
int main()
{
  int no1=11.2,no2=21.23;
  cout<<"before swap data is: "<<no1<<" "<<no2<<endl;
  swapR(no1,no2);
  cout<<"after swap: "<<no1<<" "<<no2<<endl;
  
  float f1=11.2,f2=21.23;
  cout<<"before swap data is: "<<f1<<" "<<f2<<endl;
  swapR(f1,f2);
  cout<<"after swap: "<<f1<<" "<<f2<<endl;

  
  char ch1='a',ch2='b';
  cout<<"before swap data is: "<<ch1<<" "<<ch2<<endl;
  swapR(ch1,ch2);
  cout<<"after swap: "<<ch1<<" "<<ch2<<endl;

    return 0;
}