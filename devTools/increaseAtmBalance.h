#include <iostream>
using namespace std;

extern int AtmBalance;

void increaseAtmBalance(){
    string amount;
    while (!isNumber(amount) || (!stoi(amount) > 0) ){  // loop until input is valid
        cout << "Enter amount of money you want to place in ATM: (amount > 0)" << endl;
        cin >> amount;
    }
    AtmBalance += stoi(amount); // calculate new ATM balance
    makeOperation("Added " + amount + " € to ATM machine"); // call makeOperation function
}