#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter first number : ";
    cin>>a;

    cout<<"Enter second number : ";
    cin>>b;

    char s;
    cout<<"Enter Operation to perform : (+,-,*,/,%) = ";
    cin>>s;

    if(s == '+')
    {
        cout<<"Result = "<<a+b;
    }
    else if(s =='-')
    {
         cout<<"Result = "<<a-b;
    }
    else if(s == '*')
    {
        cout<<"Result = "<<a*b;
    }
    else if(s == '/')
    {
      if(b!=0)
      {
         cout<<"Result = "<<a/b;
      }
      else
      {
         cout<<"Invalid entries!";
      }
    }
    else if(s == '%')
    {
      if(b!=0)
      {
         cout<<"Result = "<<a%b;
      }
      else
      {
        cout<<"Invalid Entries!!";
      }
    
    }
}