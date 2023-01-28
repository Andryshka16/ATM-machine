#include <iostream>
#include <fstream>

using namespace std;

void clearAtmHistory(){
    ofstream file;
    file.open("operations.txt");
    file << "";
    file.close();
    cout << "Successfully cleared ATM history" << endl;
}