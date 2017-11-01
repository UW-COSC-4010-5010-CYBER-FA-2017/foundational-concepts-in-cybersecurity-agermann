#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;


int main()
{
    string input = "";
    bool admin = false;


    cout << "Welcome to Super Safe Software Installer!" << endl;
    cout << "Grant admin privileges to install software? (y/n) (Admin privileges will be revoked afterwards)" << endl;
    cin >> input;
    if (input == "y")
    {
        admin = true;
        cout << "Admin privileges granted!" << endl;
    }
    else
    {
        admin = false;
    }
    if (admin)
    {
        cout << "Software installing..." << endl;
        cout << "Super Safe Software installed!" << endl;
        admin = false;
    }
    else
    {
        cout << "Admin privileges are needed to install this software." << endl;
    }
    cin >> input;

    return 0;
}

