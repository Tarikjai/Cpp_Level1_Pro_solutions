#include <iostream>
#include <string>
using namespace std;

struct TaskDuration {
    int days;
    int hours;
    int minutes;
    int seconds;
};

int validatePositiveNumber(string Message) {
    int seconds;
    do {
        cout << Message << endl;
        cin >> seconds;
    } while (seconds <= 0);
    return seconds;
}

TaskDuration SecondsToTaskDuration(int TotalSeconds) {
    TaskDuration Duration;

    int SecondsPerDay = 60 * 60 * 24;
    int SecondsPerHour = 60 * 60;
    int SecondsPerMinute = 60;
    int Remainder = 0;
    int totalSeconds = TotalSeconds;

    Duration.days = totalSeconds / SecondsPerDay;
    Remainder = totalSeconds % SecondsPerDay;

    Duration.hours = Remainder / SecondsPerHour;
    Remainder = Remainder % SecondsPerHour;

    Duration.minutes = Remainder / SecondsPerMinute;
    Remainder = Remainder % SecondsPerMinute;

    Duration.seconds = Remainder;

    return Duration;
}



void printResult(TaskDuration Duration) {
    cout << Duration.days << ":" << Duration.hours << ":" << Duration.minutes << ":" << Duration.seconds << endl;
}


int main() {

    int TotalSeconds = validatePositiveNumber("Please enter the number of seconds ");
    printResult(SecondsToTaskDuration(TotalSeconds));
}

