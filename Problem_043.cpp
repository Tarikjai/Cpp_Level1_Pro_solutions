#include <iostream>
#include <ctime>
#include <string>
using namespace std;


struct strTime {
	int days;
	int hours;
	int minutes;
	int seconds;
};

int readInput(string Message) {
	int Input;
	do {
		cout << Message << endl;
		cin >> Input;
	} while (Input <= 0);
	return Input;
}


strTime calculate(int Input) {
	strTime duration;
	int remainder;
	int SecondsPerDay = 24 * 60 * 60;
	int SecondsPerHour = 60 * 60;
	int SecondsPerMinute = 60;

	duration.days = floor(Input / SecondsPerDay);
	remainder = Input % SecondsPerDay;

	duration.hours = floor(remainder / SecondsPerHour);
	remainder = Input % SecondsPerHour;

	duration.minutes = floor(remainder / SecondsPerMinute);
	remainder = Input % SecondsPerMinute;

	duration.seconds = remainder;

	return duration;
}

void print(strTime duration) {

	cout << duration.days << ":" << duration.hours << ":" << duration.minutes << ":" << duration.seconds;

}
int main() {
	int TotalSeconds = readInput("Please enter the TotalSeconds: ");

	print(calculate(TotalSeconds));

}