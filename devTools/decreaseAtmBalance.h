#include <iostream>

extern int AtmBalance;

void decreaseAtmBalance(){
    string amount;
    while (!isNumber(amount) || (!stoi(amount) > 0) ){ 
        cout << "Enter amount of money you want to take from ATM: (amount > 0)" << endl;
        cin >> amount;
    }
    AtmBalance -= stoi(amount);
    cout << "Took "<< amount << " euros from ATM machine" << endl;
}