#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

class LotteryMachine {
protected:
    int winningNumber = rand() % 100;
    int cost = 5;
    int prize = 5000000;
public:
    bool checkWin(int number)
    {
        return (number == winningNumber);
    }

    int getCost()
    {
        return cost;
    }
    
    int getPrize()
    {
        return prize;
    }
};



int main()
{
    string input = "";
    LotteryMachine lotto;

    while (true)
    {
        cout << "Type anything to buy a lottery ticket (q or n to quit)! It costs $" << lotto.getCost() << endl;
        cin >> input;
        if (input == "q" || input == "n")
        {
            return 0;
        }

        int ticketNum = rand() % 100;
        cout << "Your ticket number is " << ticketNum << endl;

        bool win = lotto.checkWin(ticketNum);
        if (win)
        {
            cout << "~~~WINNER!~~~ You won " << lotto.getPrize() << endl;
        }
        else
        {
            cout << "Better luck next time!" << endl;
        }

    }

    return 0;
}

