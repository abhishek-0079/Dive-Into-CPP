//Program to find the Sum of first n natural number

#include<iostream>
using namespace std;
int main()
{   
    int n ,sum;
    cout<<"Enter the number of terms"<<endl;
    cin>>n;
     
     sum=n*(n+1)/2;
     cout<<"Sum is "<<sum;
    return 0;
}
