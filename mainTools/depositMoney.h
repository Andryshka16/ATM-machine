#include <iostream>
using namespace std;

extern int cardBalance;
extern int AtmBalance;
 
void depositMoney(){
    string depositAmount;
    
    while (!isNumber(depositAmount)|| (!stoi(depositAmount) > 0) ){ // loop until input is valid
        cout << "Enter amount of money you want to deposit: (deposit > 0)" << endl;
        cin >> depositAmount;
    }
    if (stoi(depositAmount) > cardBalance ) {
        cout << "You dont have enough money!" << endl;
    }
    else {
        AtmBalance += stoi(depositAmount);
        cardBalance -= stoi(depositAmount);
        makeOperation("Successfully deposited " + depositAmount + " euros"); // call makeOperation function
    }
}