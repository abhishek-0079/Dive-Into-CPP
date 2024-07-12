//Program to Use compound assignment operators

#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int sum=15;

    sum = sum + x;//we can also this expression as sum += x 

    cout<<"The new value of sum is "<<sum;
    return 0;
}
