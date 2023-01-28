#include <iostream>

using namespace std;

extern int cardBalance;
extern int AtmBalance;

void withdrawMoney(){    
    string withdrawAmount;
    
    while (!isNumber(withdrawAmount) || (!stoi(withdrawAmount) > 0) ){ 
        cout << "Enter amount of money you want to withdraw: (withdraw > 0)" << endl;
        cin >> withdrawAmount;
    }
    if (stoi(withdrawAmount) > AtmBalance ) {
        cout << "ATM doesnt have enough money!" << endl;
    }
    else {
        AtmBalance -= stoi(withdrawAmount);
        cardBalance += stoi(withdrawAmount);
        makeOperation("Successfully widrawn " + withdrawAmount + " euros");
    }
}