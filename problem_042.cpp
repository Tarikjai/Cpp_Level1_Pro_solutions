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


strTime readNumber() {
	strTime time;
	time.days = readInput("Please type the number of days: ");
	time.hours = readInput("Please type the number of hours: ");
	time.minutes = readInput("Please type the number of minutes: ");
	time.seconds = readInput("Please type the number of seconds: ");
	return time;
}

int calculate(strTime time) {
	return time.seconds + (time.minutes * 60) + (time.hours * 60 * 60) + (time.days * 24 * 60 * 60);

}

int main() {

	cout << calculate(readNumber());

}