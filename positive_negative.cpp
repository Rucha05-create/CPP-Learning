#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter the number : ";
    cin>>a;

    if(a<0)
    {
        cout<<a<<" is a negative number";
    }
    else if(a==0)
    {
        cout<<"The number is zero";
    }
    else
    {
        cout<<a<<" is a positive number";
    }

    return 0;
}