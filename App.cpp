#include <iostream>
#include <string>
using namespace std;

enum  enWeekDay {
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7
};

int readNumber(string Message) {
    int day;
    do {
        cout << Message << endl;
        cin >> day;
    } while (day <= 0 || day >= 8);
    return day;
}

enWeekDay checkDay(int day)
{

    switch (day) {
    case 1 :
        return enWeekDay::Sunday;
        break;
   
    }
  
}

void printResult(int day) {
    if(checkDay(day) == enWeekDay::Sunday)
        cout << "Sunday" << endl;
}

 
int main() {
    int day = readNumber("Please enter the day Number");
    printResult(day);
}