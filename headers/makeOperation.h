#include <iostream>
#include <fstream>
#include "getCurrentDateTime.h"

using namespace std;

void makeOperation(string text){ // function that writes operation in file and displays it in console
    ofstream file;
    file.open("operations.txt", ios::app);
    file << text + "   • " + getCurrentDateTime() << endl;
    file.close();
    cout << text.replace(text.find("€"), 3, "euros") << endl; // Cpp doesnt display euro sign in console
}