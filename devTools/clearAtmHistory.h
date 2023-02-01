#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
using namespace std;

void clearAtmHistory(){
    ofstream file;
    file.open("operations.txt");
    file << "";
    file.close();
    MessageBoxA(NULL, "Successfully cleared ATM history", "ALERT", MB_OK | MB_ICONINFORMATION);
    cout << "Successfully cleared ATM history" << endl;
}