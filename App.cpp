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

TaskDuration readInput() {
    TaskDuration Duration;

    Duration.days = validatePositiveNumber("Please enter the number of days");
    Duration.hours = validatePositiveNumber("Please enter the number of hours"); 
    Duration.minutes = validatePositiveNumber("Please enter the number of minutes"); 
    Duration.seconds = validatePositiveNumber("Please enter the number of seconds");
    return Duration;
}







float calculate(TaskDuration Duration) {
    return  (Duration.days * 24 * 60 * 60) + (Duration.hours * 60 * 60) +(Duration.minutes * 60) + Duration.seconds;
}

 


int main() {
	 
    cout << calculate(readInput());
}

