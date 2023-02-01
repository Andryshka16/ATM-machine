#include <iostream>
using namespace std;

extern int AtmBalance;

void decreaseAtmBalance(){
    string amount;

    while (!isInRange(amount, 0)){ // loop until input is valid
        cout << "Enter amount of money you want to take from ATM: (amount > 0)" << endl;
        cin >> amount;
    }
    if (stoi(amount) > AtmBalance ) { // check if ATM has enough money
        MessageBox("ATM does not have enough money!", "Error");
    }
    else {
        AtmBalance -= stoi(amount); // calculate new ATM balance
        makeOperation("Took " + amount + " € from ATM machine"); // call makeOperation function
    }
}