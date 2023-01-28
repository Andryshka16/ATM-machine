#include <iostream>
using namespace std;

extern int AtmBalance;

void increaseAtmBalance(){
    string amount;
    while (!isNumber(amount) || (!stoi(amount) > 0) ){ 
        cout << "Enter amount of money you want to place in ATM: (amount > 0)" << endl;
        cin >> amount;
    }
    AtmBalance += stoi(amount);
    makeOperation("Added " + amount + " euros to ATM machine");
}