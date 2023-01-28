#include <iostream>
using namespace std;

bool isNumber(string s){ // fcuntion to check if string can be convertable to number
    if (!s.length()){
        return false;
    }
    for (int i = 0; i < s.length(); i++){
        if (!isdigit(s.at(i))){
            return false;
        }
    }
    return true;
}