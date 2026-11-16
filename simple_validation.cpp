
#include<iostream>
using namespace std;

int main()
{
    string name, email, password;
    int age;

    cout << "===== SMART INPUT VALIDATOR =====\n";

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter email: ";
    cin >> email;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter Password: ";
    cin >> password;

    cout << "\n----- VALIDATION RESULTS -----\n";

    bool valid = true;

    if(name.empty())
    {
        cout << "Name: Invalid\n";
        valid = false;
    }
    else
    {
        cout << "Name: Valid\n";
    }

    if(age >= 1 && age <= 120)
    {
        cout << "Age: Valid\n";
    }
    else
    {
        cout << "Age: Invalid\n";
        valid = false;
    }

    if(email.find('@') != string::npos &&
       email.find('.') != string::npos)
    {
        cout << "Email: Valid\n";
    }
    else
    {
        cout << "Email: Invalid\n";
        valid = false;
    }

    if(password.length() >= 8)
    {
        cout << "Password: Valid\n";
    }
    else
    {
        cout << "Password: Invalid\n";
        valid = false;
    }

    if(valid)
    {
        cout << "\nAll inputs are valid!";
    }
    else
    {
        cout << "\nPlease correct invalid inputs.";
    }

    return 0;
}
