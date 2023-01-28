#include <iostream>

extern int cardBalance;
extern int AtmBalance;
 
void depositMoney(){
    string depositAmount;
    
    while (!isNumber(depositAmount)|| (!stoi(depositAmount) > 0) ){ 
        cout << "Enter amount of money you want to deposit: (deposit > 0)" << endl;
        cin >> depositAmount;
    }
    if (stoi(depositAmount) > cardBalance ) {
        cout << "You dont have enough money!" << endl;
    }
    else {
        AtmBalance += stoi(depositAmount);
        cardBalance -= stoi(depositAmount);
        cout << "Successfully deposited " << stoi(depositAmount) << " euros" << endl;
    }
}