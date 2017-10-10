#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int first;
    int second;
    string socialSecurity;
    string creditCard;
    string maidenName;
    string password;

    cout << "Enter a whole number:" << endl;
    cin >> first;
    cout << "Enter another whole number:" << endl;
    cin >> second;

    while (input != "pw123")
    {
        cout << "Enter the secret password" << endl;
        cout << "hint: consult the user manual (or source code):" << endl;
        cin >> input;
    }
    while (input != "Vientiane")
    {
        cout << "Enter the capital of Laos (only Laosian patriots may use this software!):" << endl;
        cin >> input;
    }

    cout << first << "+" << second << "=" << first + second << endl;

    cin >> input;
    return 0;
}

