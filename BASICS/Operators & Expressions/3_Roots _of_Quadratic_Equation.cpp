//Program to find the Roots of the Quadratic equation

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2;
    cout<<"Enter the values"<<endl;
    cin>>a>>b>>c;

    r1= (-b + sqrt(b*b - 4*a*c))/2*a;
    r2= (-b - sqrt(b*b - 4*a*c))/2*a;

    cout<<"The roots are "<<r1<<" "<<r2; //<<" " this is used to give space between r1 and r2
    return 0;

}