#include <iostream>
using namespace std;

extern int AtmBalance;

void decreaseAtmBalance(){
    string amount;
    while (!isNumber(amount) || (!stoi(amount) > 0) ){ 
        cout << "Enter amount of money you want to take from ATM: (amount > 0)" << endl;
        cin >> amount;
    }
    AtmBalance -= stoi(amount);
    makeOperation("Took " + amount + " euros from ATM machine");
}