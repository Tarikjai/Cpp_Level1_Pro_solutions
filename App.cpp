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
  
    return  float DaystoSeconds = Duration.days * 24 * 60 * 60;
}



int main() {
	 
     

}

