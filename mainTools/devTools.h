#include <iostream>
using namespace std;

#include "../devTools/increaseAtmBalance.h"
#include "../devTools/decreaseAtmBalance.h"
#include "../devTools/checkAtmBalance.h"

extern int cardBalance;
extern int AtmBalance;
extern string password;

string devOptions = "\n 1: Increase ATM balance\n 2: Decrease ATM balance\n 3: Check ATM balance\n";

void devTools(){
    string userPassword;
    int tries = 0;

    while (userPassword != password && tries < 3 ) {
        cout << "Enter password to join devMod: (" << 3 - tries << " tries left)" << endl;
        cin >> userPassword;
        tries += 1;
    }

    if (tries < 4) {
        string choice;
        cout << devOptions << endl;
        while (!isNumber(choice) || !(stoi(choice) > 0 && stoi(choice) < 4) ){
            cout << "Enter number of option you want to implement: (1 - 3)" << endl;
            cin >> choice;
        }

        switch (stoi(choice)){
            case 1:
                increaseAtmBalance();
                break;
            case 2:
                decreaseAtmBalance();
                break;
            case 3:
                checkAtmBalance();
                break;
        }
    }
}