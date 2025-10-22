#include <iostream>
#include <ctime>
#include <string>
using namespace std;

//enum enMonths {
//    January = 1,
//    February = 2,
//    March = 3,
//    April = 4,
//    May = 5,
//    June = 6,
//    July = 7,
//    August = 8,
//    September = 9,
//    October = 10,
//    November = 11,
//    December = 12
//};
//
//int readMonth(string Message, int From, int To) {
//    int Month=0;
//    do {
//        cout << Message << endl;
//        cin >> Month;
//    } while (Month < From || Month > To);
//    return Month;
//}
//
//enMonths CheckMonth() {
//    return (enMonths)readMonth("Please type a Number 1 - 12",1,12);
//}
//
//string print(enMonths Month) {
//    switch (Month) {
//    case enMonths::January:   return "January";
//    case enMonths::February:  return "February";
//    case enMonths::March:     return "March";
//    case enMonths::April:     return "April";
//    case enMonths::May:       return "May";
//    case enMonths::June:      return "June";
//    case enMonths::July:      return "July";
//    case enMonths::August:    return "August";
//    case enMonths::September: return "September";
//    case enMonths::October:   return "October";
//    case enMonths::November:  return "November";
//    case enMonths::December:  return "December";
//    default:                  return "Unknown month";
//    }
//}
//
//int main() {
//    cout << print(CheckMonth());
//}

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

time_t createTargetDate(int day, int month, int hour, int minute) {
    time_t now = time(nullptr);
    tm targetDate{};
    localtime_s(&targetDate, &now); // secure version

    targetDate.tm_mday = day;
    targetDate.tm_mon = month - 1; // months start from 0
    targetDate.tm_hour = hour;
    targetDate.tm_min = minute;
    targetDate.tm_sec = 0;

    return mktime(&targetDate);
}

void displayTimeRemaining(double secondsRemaining) {
    if (secondsRemaining <= 0) {
        cout << "The target date has already passed." << endl;
        return;
    }

    int days = secondsRemaining / 86400;
    int hours = ((int)secondsRemaining % 86400) / 3600;
    int minutes = ((int)secondsRemaining % 3600) / 60;
    int seconds = (int)secondsRemaining % 60;

    cout << "Time remaining: "
        << days << " days, "
        << hours << " hours, "
        << minutes << " minutes, and "
        << seconds << " seconds before meeting Anastasia." << endl;
}

void ReadInput() {
    string answer;
    cout << "Do you want to know how many days are left before meeting Anastasia? (yes/no)" << endl;
    cin >> answer;

    if (answer == "yes" || answer == "Yes") {
        const int TARGET_DAY = 25;
        const int TARGET_MONTH = 10;  // October
        const int TARGET_HOUR = 15;
        const int TARGET_MINUTE = 50;

        time_t now = time(nullptr);
        time_t target = createTargetDate(TARGET_DAY, TARGET_MONTH, TARGET_HOUR, TARGET_MINUTE);

        double secondsRemaining = difftime(target, now);
        displayTimeRemaining(secondsRemaining);
    }
    else {
        cout << "Alright, maybe later." << endl;
    }
}
int main() {
    ReadInput();
    return 0;
}
