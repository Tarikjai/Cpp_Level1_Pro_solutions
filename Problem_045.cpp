#include <iostream>
#include <ctime>
#include <string>
using namespace std;

enum enMonths {
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

int readMonth(string Message, int From, int To) {
    int Month = 0;
    do {
        cout << Message << endl;
        cin >> Month;
    } while (Month < From || Month > To);
    return Month;
}



enMonths CheckMonth() {
    return (enMonths)readMonth("Please type a Number 1 - 12", 1, 12);
}

string print(enMonths Month) {
    switch (Month) {
    case enMonths::January:   return "January";
    case enMonths::February:  return "February";
    case enMonths::March:     return "March";
    case enMonths::April:     return "April";
    case enMonths::May:       return "May";
    case enMonths::June:      return "June";
    case enMonths::July:      return "July";
    case enMonths::August:    return "August";
    case enMonths::September: return "September";
    case enMonths::October:   return "October";
    case enMonths::November:  return "November";
    case enMonths::December:  return "December";
    default:                  return "Unknown month";
    }
}

int main() {
    cout << print(CheckMonth());
}