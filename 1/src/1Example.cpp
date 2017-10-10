#include <iostream>
#include <string>

using namespace std;


string testData = "test123";
string prodData = "SERIOUS PRODUCTION DATA";
string input;



void test()
{
    string testInput;
    while (testInput != "Q")
    {
        cout << "Test data is currently: " << testData << endl;
        cout << "To change data, type 'C'. To quit, type 'Q'." << endl;
        cin >> testInput;
        if (testInput == "C")
        {
            cout << "Enter new data:" << endl;
            cin >> testData;
            cout << endl;
            cout << "Test data is now: " << testData << endl;
        }
    }
}

void prod()
{
    string testInput;
    while (testInput != "Q")
    {
        cout << "Production data is currently: " << prodData << endl;
        cout << "To change data, type 'C'. To quit, type 'Q'." << endl;
        cin >> testInput;
        if (testInput == "C")
        {
            cout << "Enter new data:" << endl;
            cin >> prodData;
            cout << endl;
            cout << "Production data is now: " << prodData << endl;
        }
    }
}


int main()
{
    

    cout << "Run test data or production data?(T/P)" << endl;
    cin >> input;
    if (input == "T")
    {
        test();
    }
    else if (input == "P")
    {
        prod();
    }
    else
    {
        cout << "Incorrect input." << endl;
        cin >> input;
    }
    return 0;
}

