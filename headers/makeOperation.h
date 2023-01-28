#include <iostream>
#include <fstream>
#include "getCurrentDateTime.h"

using namespace std;

void makeOperation(string text){
    ofstream file;
    file.open("operations.txt", ios::app);
    file << text + "   • " + getCurrentDate() + " " + getCurrentTime() << endl;
    file.close();
    cout << text << endl;
}