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
