
#include <iostream>
using namespace std;

int main()
{
    int n, original, temp;
    int digit, length = 0;
    int sum = 0;
    int power;

    cout << "Enter a number: ";
    cin >> n;

    original = n;
    temp = n;

    // Count the number of digits
    while (temp > 0)
    {
        length++;
        temp = temp / 10;
    }

    // Handle zero
    if (n == 0)
    {
        length = 1;
    }

    // Calculate the sum of digits raised to the power of length
    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;

        for (int i = 1; i <= length; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (original == 0)
    {
        sum = 0;
    }

    // Check Armstrong number
    if (sum == original && original >= 0)
    {
        cout << original << " is an Armstrong number.";
    }
    else
    {
        cout << original << " is not an Armstrong number.";
    }

    return 0;
}
