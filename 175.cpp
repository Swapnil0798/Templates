#include<iostream>
using namespace std;

template<class T>
int Addition(T A,T B)
{
    T ans;
    ans=A+B;
    return ans;
}

int main()
{
    int ino1=11,ino2=21;
    int ret=0;

    ret=Addition(ino1,ino2); 
    cout<<"addition is: "<<ret<<endl;

    
    float f1=11.89,f2=21.11;
    float fret=0.0;
    fret=Addition(f1,f2); 
    cout<<"addition is: "<<fret<<endl;

    return 0;
}