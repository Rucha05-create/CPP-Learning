
#include <iostream>
using namespace std;

int main()
{
    int n;
    int original;
    int reversed = 0;
    int digit;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (original == reversed)
    {
        cout << original << " is a palindrome number.";
    }
    else
    {
        cout << original << " is not a palindrome number.";
    }

    return 0;
}
