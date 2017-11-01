#include <iostream>
#include <string>

using namespace std;


class HAL {
protected:
public:
    void doStuff()
    {
        cout << "HAL is accessed as the bottom layer (in this program)" << endl;
    }
};

class Microkernel {
protected:
    HAL hal;
public:
    void accessHAL()
    {
        cout << "Microkernel accessing HAL..." << endl;
        hal.doStuff();
    }
};

class OperatingSystem {
protected:
    Microkernel kernel;
public:
    void accessMicrokernel()
    {
        cout << "Operating system accessing kernel.." << endl;
        kernel.accessHAL();
    }
};


int main()
{
    string input;


    cout << "Application is sending down an instruction to Operating system..." << endl;
    OperatingSystem os;
    os.accessMicrokernel();

    cin >> input;

    return 0;
}

