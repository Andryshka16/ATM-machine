#include <iostream>
#include "headers/isNumber.h"
#include "headers/makeOperation.h"

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

    cout << "\n\tWelcome to ATM machine" << endl;

    while (running){ // while programm is running perform this loop
        string choice;
        cout << mainOptions << endl;
        while (!isNumber(choice) || !(stoi(choice) > 0 && stoi(choice) < 5) ){ // loop until input is valid
            cout << "Enter a number of option you want to implement: (1 - 4)" << endl;
            cin >> choice;
        }

        switch (stoi(choice)){ // user input's handling switch
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
        while (answer != "yes" && answer != "no") { // loop until input is valid
            cout << "\nDo you want to make one more operation? (yes / no)" << endl;
            cin >> answer;
        }
        if (answer == "no") {
            running = false; // exit programm if user input is "no" 
        }
    }
    cout << "Thank's for using this ATM machine!\nHave a nice day!" << endl;
    return 0;
}
