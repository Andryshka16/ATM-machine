#include <iostream>
using namespace std;

extern int cardBalance;
extern int AtmBalance;
 
void depositMoney(){
    string depositAmount;
    
    while (!isInRange(depositAmount, 0)){ // loop until input is valid and > 0
        cout << "Enter amount of money you want to deposit: (deposit > 0)" << endl;
        cin >> depositAmount;
    }
    if (stoi(depositAmount) > cardBalance ){
        MessageBox("You dont have enough money!", "ERROR");
    }
    else {
        AtmBalance += stoi(depositAmount);
        cardBalance -= stoi(depositAmount);
        makeOperation("Successfully deposited " + depositAmount + " €"); // call makeOperation function
    }
}