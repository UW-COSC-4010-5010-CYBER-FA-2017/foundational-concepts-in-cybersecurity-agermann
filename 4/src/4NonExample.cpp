#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Driver install utility. 'Q' to quit." << endl;
    cout << "Run as system administrator? (Y/N)" << endl;
    cin >> input;
    if (input != "Q")
    {
        cout << "---Installing drivers---" << endl;
        for (int i = 0; i <= 10; i++)
        {
            cout << "---" << i * 10 << "% complete---" << endl;
        }
    }
    cin >> input;
    return 0;
}

