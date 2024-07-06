//Program to find the Area of circle

#include<iostream>
#include<cmath>
using namespace std;
int main()
{    float r,area;
    cout<<"Enter the Radius"<<endl;
    cin>>r;
    area = 3.141 * r*r;
    cout<<"Area of Circle is "<<area;
    return 0;
}