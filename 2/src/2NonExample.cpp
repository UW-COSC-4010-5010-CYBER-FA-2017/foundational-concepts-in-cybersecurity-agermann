#include <iostream>
#include <string>

using namespace std;


int address[30];

void msWord()
{
    int addressStart = 0;
    int addressEnd = 9;

    for (int i = addressStart; i <= addressEnd; ++i)
    {
        address[i] = 42;
        cout << "msWord accessing NOT unique address space: address " << i << endl;

    }
}

void msPaint()
{
    int addressStart = 5;
    int addressEnd = 19;

    for (int i = addressStart; i <= addressEnd; ++i)
    {
        address[i] = 23;
        cout << "msPaint accessing NOT unique address space: address " << i << endl;
    }
}

void pinball()
{
    int addressStart = 15;
    int addressEnd = 20;

    for (int i = addressStart; i <= addressEnd; ++i)
    {
        address[i] = 777;
        cout << "Pinball accessing NOT unique address space: address " << i << endl;

    }
}

int main()
{
    string input;

    for (int i = 0; i < 10; i++)
    {
        msWord();
        msPaint();
        pinball();
    }
    cin >> input;

    return 0;
}

