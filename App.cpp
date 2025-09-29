#include <iostream>
#include <string>
using namespace std;

float ReadHours(string Message) {
	float Number;
	do {
		cout << Message << endl;
		cin >> Number;
		if (Number <= 0) {
			cout << "Number must be > 0! " << endl;
			cout << endl;
		}
	} while (Number <= 0);
	return Number;
}


float calculateDays(float NumberHours) {
	float days;
	days = NumberHours / 24;
	return days;
}
float calculateWeeks(float days) {
	float weeks;
	weeks = days / 7;
	return weeks;
}
 

int main() {
	float NumberHours = ReadHours("Please input the number of hours: ");

	float days = calculateDays(NumberHours);
	float weeks = calculateWeeks(days);


	
	cout << "weeks: " << weeks;
	cout <<   endl;
	cout << "Days: " << days << endl;
	cout << endl;
}

