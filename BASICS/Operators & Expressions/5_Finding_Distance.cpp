//Program to find Distance

#include<iostream>
using namespace std;
int main()
{   float u,v,a,distance;
    cout<<"Enter final velocity,initial velocity and acceleration"<<endl;
    cin>>v>>u>>a;
    distance = (v*v-u*u)/2*a;
    cout<<"Distance is "<<distance;
    return 0;
}