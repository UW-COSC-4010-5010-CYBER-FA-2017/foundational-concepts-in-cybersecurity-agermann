#include <iostream>
#include <string>

using namespace std;


class HAL {
protected:
public:
    void doStuff()
    {
        cout << "HAL being accessed..." << endl;
    }
};

class Microkernel {
protected:
public:
    void doStuff()
    {
        cout << "Microkernel being accessed..." << endl;
    }
};

class OperatingSystem {
protected:
public:
    void doStuff()
    {
        cout << "Operating system being accessed..." << endl;
    }
};


int main()
{
    string input;
    OperatingSystem os;
    HAL hal;
    Microkernel kernel;

    while (input != "q")
    {
        cout << "Would you like to access the Operating System (o), Microkernel (m), or HAL (h)? (q to quit)" << endl;
        cin >> input;
        if (input == "o")
        {
            os.doStuff();
        }
        else if (input == "m")
        {
            kernel.doStuff();
        }
        else if (input == "h")
        {
            hal.doStuff();
        }
    }



    return 0;
}

