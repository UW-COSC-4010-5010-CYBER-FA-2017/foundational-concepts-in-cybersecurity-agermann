#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


int address[30];

void msWord()
{
    int addressStart = 0;
    int addressEnd = 9;

    for (int i = addressStart; i <= addressEnd; ++i)
    {
        address[i] = 42;
        cout << "msWord accessing unique address space: address " << i << endl;

    }
}

void msPaint()
{
    int addressStart = 10;
    int addressEnd = 19;

    for (int i = addressStart; i <= addressEnd; ++i)
    {
        address[i] = 23;
        cout << "msPaint accessing unique address space: address " << i << endl;
    }
}

double multiply(double num1, double num2)
{


    return num1*num2;
}

int main()
{
    string input;
    double num1;
    double num2;
    double result;

    cout << "The world's faultiest multiplication machine!" << endl;

    while (true)
    {
        cout << "Enter two numbers to multiply..." << endl;
        cin >> num1;
        cin >> num2;
        if (rand() % 100 > 50)
        {
            cout << "An important part broke!" << endl;
            result = 1 / 0;
        }
        result = num1*num2;

        cout << "Your result is " << result << endl;
    }

    return 0;
}

