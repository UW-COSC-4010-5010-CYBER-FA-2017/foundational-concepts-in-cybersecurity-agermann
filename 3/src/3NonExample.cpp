#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "What do you want to do to the flag? (Q to quit)" << endl;
    while (input != "Q")
    {
        cin >> input;
        cout << "You choose to " << input << " the flag. What now?" << endl;
    }
    return 0;
}

