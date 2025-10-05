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

int readNumber(string Message, int From, int To) {
    int day;
    do {
        cout << Message << endl;
        cin >> day;
    } while (day < From || day > To);
    return day;
}

enWeekDay checkDay()
{
    return (enWeekDay) readNumber("Please enter the day Number Sunday = 1,  Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7", 1, 7);
}

string  printResult(enWeekDay day) {

    switch (day) {
    case enWeekDay::Sunday:
        return "Sunday";
    case enWeekDay::Monday:
        return "Monday";
    case enWeekDay::Tuesday:
        return "Tuesday";
    case enWeekDay::Wednesday:
        return "Wensday";
    case enWeekDay::Thursday:
        return "Thursday";
    case enWeekDay::Friday:
        return "Friday";
    case enWeekDay::Saturday:
        return "Saturday";
    default:
        return "Not a valid day";
    }
}


int main() {
    cout << printResult(checkDay());
}