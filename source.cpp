#include <iostream>

#include "headers/isInRange.h"
#include "headers/makeOperation.h"

#include "mainTools/depositMoney.h"
#include "mainTools/withdrawMoney.h"
#include "mainTools/checkBalance.h"
#include "mainTools/devTools.h"


using namespace std;

class Atm {
    public:
        bool running = true;
        string mainOptions = "\n 1: Deposit money\n 2: Withdraw money\n 3: Check balance\n 4: Devtools\n";

        void greeting(){
            cout << "\n\tWelcome to ATM machine" << endl;
        }
        void disableAtm(){
            running = false;
            cout << "Thank's for using this ATM machine!" << endl;
            cout << "Have a nice day!" << endl;
        }
};

// Global Atm settings

string password = "0000";
bool running = true;

int cardBalance = 10000;
int AtmBalance = 100000;

int main() {
        Atm app;
        app.greeting();

        while (app.running) { // while programm is running perform this loop
            string choice;
            cout << app.mainOptions << endl;
            
            while (!isInRange(choice, 0, 5)){ // loop until input is valid
                cout << "Enter a number of option you want to implement: (1 - 4)" << endl;
                cin >> choice;
            }

            switch (stoi(choice)){ // user input's handling switch
                case 1: depositMoney(); break;
                case 2: withdrawMoney(); break;
                case 3: checkBalance(); break;
                case 4: devTools(); break;
            }

        string answer;
        while (answer != "yes" && answer != "no") { // loop until input is valid
            cout << "\nDo you want to make one more operation? (yes / no)" << endl;
            cin >> answer;
        }
        if (answer == "no") app.disableAtm(); // exit programm if user input is "no" 
        
    }
    return 0;
}
