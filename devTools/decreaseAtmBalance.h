#include <iostream>
using namespace std;

extern int AtmBalance;

void decreaseAtmBalance(){
    string amount;
    while (!isNumber(amount) || (!stoi(amount) > 0) ){ // loop until input is valid
        cout << "Enter amount of money you want to take from ATM: (amount > 0)" << endl;
        cin >> amount;
    }
    AtmBalance -= stoi(amount); // calculate new ATM balance
    makeOperation("Took " + amount + " euros from ATM machine"); // call makeOperation function
}