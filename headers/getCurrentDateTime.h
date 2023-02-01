#include <ctime>
#include <iostream>
using namespace std;

string str(int number){ // fixes time format f. e. (1:4:2) => (01: 04: 02)
    return (number > 9 ? "" : "0") + to_string(number);
}

string getCurrentDateTime(){
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);                 
    localTime = localtime(&currentTime);  

    int Day = localTime -> tm_mday;
    int Month = localTime -> tm_mon + 1;
    int Year = localTime -> tm_year + 1900;

    int Hour = localTime -> tm_hour;
    int Min = localTime -> tm_min;
    int Sec = localTime -> tm_sec;

    string date = str(Day) + "/" + str(Month) + "/" + str(Year);
    string time = str(Hour) + ":" + str(Min) + ":" + str(Sec);

    return date + " " + time;
}