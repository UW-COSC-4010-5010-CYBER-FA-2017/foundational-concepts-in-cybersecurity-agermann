#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

class LotteryMachine {
protected:

public:
    //horrible practice to have public access variables that have any importance.
    int winningNumber = rand() % 100;
    int cost = 5;
    int prize = 5000000;
};



int main()
{
    string input = "";
    LotteryMachine lotto;

    while (true)
    {
        cout << "Type anything to buy a lottery ticket (q or n to quit)! It costs $" << lotto.cost << endl;
        cin >> input;
        if (input == "q" || input == "n")
        {
            return 0;
        }


        int ticketNum = rand() % 100;
        cout << "Your ticket number is " << ticketNum << endl;

        bool win = lotto.winningNumber == ticketNum;
        if (win)
        {
            cout << "~~~WINNER!~~~ You won " << lotto.prize << endl;
        }
        else
        {
            cout << "Better luck next time!" << endl;
        }

    }

    return 0;
}

