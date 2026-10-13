#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter First Number : ";
    cin>>a;

    cout<<"Enter Second Number : ";
    cin>>b;

    if(a>b)
    {
        cout<<a<<" is largest number.";
    }
    else if(a==b)
    {
        cout<<a<<" is equal to "<<b;
    }
    else
    {
        cout<<b<<" is largest number.";
    }

    return 0;
}