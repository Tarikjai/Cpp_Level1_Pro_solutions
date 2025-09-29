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


float HoursToDays(float NumberHours) {

	return float(NumberHours / 24);

}

float HoursToWeeks(float NumberHours) {
	return float(NumberHours / 24 / 7);
}

float DaysToWeeks(float days) {
	;
	return   float(days) / 7;

}


int main() {
	float NumberHours = ReadHours("Please input the number of hours: ");

	float NumberOfdays = HoursToDays(NumberHours);
	float NumberOfweeks = DaysToWeeks(NumberOfdays);

	cout << "Total hours " << NumberHours << endl;
	cout << endl;
	cout << "weeks: " << NumberOfweeks << "   " << HoursToWeeks(NumberHours);
	cout << endl;
	cout << "Days: " << NumberOfdays << endl;
	cout << endl;
}

