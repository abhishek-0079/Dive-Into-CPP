//Program to find Distance between two points

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1,x2,y1,y2,distance;
    cout<<"Enter the x and y coordinates of the initial and final position"<<endl;
    cin>>x1>>x2>>y1>>y2;

    distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    
    cout<<"Distance between two points is "<<distance;
    return 0;
}