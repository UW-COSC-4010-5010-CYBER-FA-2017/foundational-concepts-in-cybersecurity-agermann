#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int first;
    int second;

    cout << "Enter a whole number:" << endl;
    cin >> first;
    cout << "Enter another whole number:" << endl;
    cin >> second;
    cout << first << "+" << second << "=" << first+second << endl;

    cin >> input;
    return 0;
}

