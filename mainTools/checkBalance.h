#include <iostream>
using namespace std;

extern int cardBalance;

void checkBalance(){
    printf("You have %d euros on your card\n", cardBalance);
}