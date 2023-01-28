#include <iostream>
#include "isNumber.h"

#include "mainTools/depositMoney.h"
#include "mainTools/withdrawMoney.h"
#include "mainTools/checkBalance.h"
#include "mainTools/devTools.h"

using namespace std;

string password = "0000";
bool running = true;

int cardBalance = 1000;
int AtmBalance = 10000;

string mainOptions = "\n 1: Deposit money\n 2: Withdraw money\n 3: Check balance\n 4: Devtools\n";

int main() {

    cout << "\n\tWelcome to new ATM" << endl;

    while (running){
        string choice;
        cout << mainOptions << endl;
        while (!isNumber(choice) || !(stoi(choice) > 0 && stoi(choice) < 5) ){
            cout << "Enter number of option you want to implement: (1 - 4)" << endl;
            cin >> choice;
        }

        switch (stoi(choice)){
            case 1:
                depositMoney();
                break;
            case 2:
                withdrawMoney();
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                devTools();
                break;
        }

        string answer;
        while (answer != "yes" && answer != "no") {
            cout << "Do you want to make one more operation? (yes / no)" << endl;
            cin >> answer;
        }
        if (answer == "no") {
            running = false;
        }
    }
    cout << "Thank's for using this ATM machine!\nHave a nice day!" << endl;
    return 0;
}
