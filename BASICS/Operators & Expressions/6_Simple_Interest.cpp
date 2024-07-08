//Program to calculate Simple Interest

#include<iostream>
using namespace std;
int main()
{
    float p,r,t,SI;
    cout<<"Enter principle,rate and time"<<endl;
    cin>>p>>r>>t;

    SI = (p*r*t)/100;

    cout<<"Simple Interest is "<<SI;
    return 0;
}