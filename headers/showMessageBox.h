#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void MessageBox(string message, string title){
    MessageBoxA(NULL, message.c_str(), title.c_str(), MB_OK | MB_ICONERROR);
}
