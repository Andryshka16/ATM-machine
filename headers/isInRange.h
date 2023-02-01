#include <iostream>
#include "../headers/showMessageBox.h"

using namespace std;

bool isInRange(string number, int a, int b = -1){// function to check if string can be convertable to number

    if (!number.length()) return false;

    for (int i = 0; i < number.length(); i++)
        if (!isdigit(number.at(i))) {
            MessageBox("Invaid syntax", "ERROR");
            return false;
        }

    if (stoi(number) <= a || (stoi(number) >= b && b > 0)) {
        MessageBox("Your number is not in valid input range!", "ERROR");
        return false;
    }
    return true;
}
