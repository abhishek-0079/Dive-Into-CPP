//Program to find the Area of Cylinder

#include<iostream>
using namespace std;
int main()
{
    float r,h,area;
    cout<<"Enter radius and height"<<endl;
    cin>>r>>h;

    area = 22/7*r*r*h;
    
    cout<<"The area of Cylinder is "<<area;
    return 0;
}