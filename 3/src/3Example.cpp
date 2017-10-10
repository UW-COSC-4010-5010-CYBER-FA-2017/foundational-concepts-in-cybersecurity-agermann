#include <iostream>
#include <string>

using namespace std;

bool raised = false;
bool onPole = false;

int main()
{
    string input;
    cout << "What do you want to do to the flag? (Q to quit)" << endl;
    while (input != "Q")
    {
        if (!onPole)
        {
            cout << "The flag is currently not on the pole. Put it on? (Y/N)" << endl;
            cin >> input;
            if (input == "Y")
            {
                onPole = true;
            }
        }
        if (onPole)
        {
            cout << "The flag is currently ";
            if (!raised)
            {
                cout << "not raised. Raise it? (Y/N)" << endl;
                cin >> input;
                if (input == "Y")
                {
                    raised = true;
                }
                else
                {
                    cout << "The flag is currently on the pole. Take it off? (Y/N)" << endl;
                    cin >> input;
                    if (input == "Y")
                    {
                        onPole = false;
                    }
                }
            }
            else
            {
                cout << "raised. Lower it? (Y/N)" << endl;
                cin >> input;
                if (input == "Y")
                {
                    raised = false;
                }
            }

        }
    }
    return 0;
}

