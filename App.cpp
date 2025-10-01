#include <iostream>
#include <string>
using namespace std;

struct TaskDuration {
    float days;
    float hours;
    float minutes;
    float seconds;
};

TaskDuration readInput() {
    TaskDuration Duration;
    cout << "days" << endl;
    cin >> Duration.days;
    cout << "hours" << endl;
    cin >> Duration.hours;
    cout << "minutes" << endl;
    cin >> Duration.minutes;
    cout << "seconds" << endl;
    cin >> Duration.seconds;
    return Duration;
}

float calculateDaystoSeconds(TaskDuration Duration) {
    return  Duration.days * 24 * 60 * 60;
}

float calculateHourstoSeconds(TaskDuration Duration) {  
    return    Duration.hours * 60 * 60;
}
float calculateMinutestoSeconds(TaskDuration Duration) {
    return Duration.minutes *  60;
}



int main() {
	 
    TaskDuration duration = readInput();
    float DaystoSeconds = calculateDaystoSeconds(duration);
    float HourstoSeconds = calculateHourstoSeconds(duration);
    float MinutestoSeconds = calculateMinutestoSeconds(duration);

    cout << DaystoSeconds + HourstoSeconds + MinutestoSeconds + duration.seconds;
}

