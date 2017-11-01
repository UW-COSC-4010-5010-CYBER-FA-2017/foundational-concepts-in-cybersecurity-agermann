#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


double multiply(double num1, double num2)
{
    if (rand() % 100 > 50)
    {
        cout << "An important part broke! Fixing..." << endl;
        cout << "Multiplication flux capacitator fixed!" << endl;
    }

    return (double)num1*num2;
}

int main()
{
    string input;
    double num1;
    double num2;

    cout << "The world's faultiest multiplication machine!" << endl;

    while (true)
    {
        cout << "Enter two numbers to multiply..." << endl;
        cin >> num1;
        cin >> num2;
        double result = multiply(num1, num2);

        cout << "Your result is " << result << endl;
    }

    return 0;
}

