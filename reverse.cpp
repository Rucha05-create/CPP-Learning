
#include <iostream>
using namespace std;

int main()
{
    int n;
    int reversed = 0;
    int digit;

    cout << "Enter the number: ";
    cin >> n;

    while (n != 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    cout << "Reversed number: " << reversed;

    return 0;
}
