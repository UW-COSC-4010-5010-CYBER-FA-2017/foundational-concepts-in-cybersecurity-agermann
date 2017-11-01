#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;


int main()
{
    string input = "";
    bool admin = false;


    cout << "Welcome to Not Super Safe Software Installer!" << endl;
    cout << "Grant admin privileges? (y/n)" << endl;
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
        cout << "Not Super Safe Software installed!" << endl;
        //software still has admin privileges
        cout << "But admin is still enabled... no safety guarantees." << endl;
    }
    else
    {
        cout << "Admin privileges are needed to install this software." << endl;
    }
    cin >> input;

    return 0;
}

