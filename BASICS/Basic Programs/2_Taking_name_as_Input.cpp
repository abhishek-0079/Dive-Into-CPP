//Program to take name from user and print message with name

#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name"<<endl; //endl is used to move to next line 

    // cin>>name;  we should use this line when there is only one word or we will use the above line//

    getline(cin,name); //This is used when there is more than one word in the name
    cout<<"Welcome Mr. "<<name;
    return 0;
}