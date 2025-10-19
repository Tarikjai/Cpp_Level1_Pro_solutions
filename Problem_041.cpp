#include <iostream>
#include <ctime>
#include <string>
using namespace std;

float readNumberOfHours(string Message) {
	float NumberOfHours;
	do {
		cout << Message << endl;
		cin >> NumberOfHours;
	} while (NumberOfHours <= 0);
	return NumberOfHours;
}


float CalculateDays(float NumberOfHours) {
	float Days = NumberOfHours / 24;
	return  Days;
}

float CalculateWeaks(float NumberOfHours) {
	float Weaks = (NumberOfHours / 24) / 7;
	return  Weaks;
}


int main() {
	float NumberOfHours = readNumberOfHours("Please insert the Number O fHours: ");

	cout << CalculateWeaks(NumberOfHours) << " Weeks" << endl;
	cout << CalculateDays(NumberOfHours) << " Days" << endl;
}