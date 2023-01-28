#include <iostream>
using namespace std;

bool isNumber(string s){
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