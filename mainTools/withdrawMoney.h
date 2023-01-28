#include <iostream>

using namespace std;

extern int cardBalance;
extern int AtmBalance;

void withdrawMoney(){    
    string withdrawAmount;
    
    while (!isNumber(withdrawAmount) || (!stoi(withdrawAmount) > 0) ){ // loop until input is valid
        cout << "Enter amount of money you want to withdraw: (withdraw > 0)" << endl;
        cin >> withdrawAmount;
    }
    if (stoi(withdrawAmount) > AtmBalance ) { // check if ATM has enough money
        cout << "ATM does not have enough money!" << endl;
    }
    else {
        AtmBalance -= stoi(withdrawAmount); // calculating new ATM balance
        cardBalance += stoi(withdrawAmount); // calculating new card balance
        makeOperation("Successfully widrawn " + withdrawAmount + " euros"); // call makeOperation function
    }
}