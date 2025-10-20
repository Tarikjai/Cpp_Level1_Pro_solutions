#include <iostream>
#include <ctime>
#include <string>
using namespace std;
enum weekDays { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };

int read(int From, int To) {
	int Days;
	do {
		cout << "Type a number between 1 and 7 " << endl;
		cin >> Days;
	} while (Days <= 0 || Days >= 8);
	return Days;
}



weekDays checkDays() {

	return (weekDays)read(1, 7);
}

string print(weekDays day) {
	switch (day) {
	case weekDays::Sunday:
		return "Sunday";
	case weekDays::Monday:
		return "Monday";
	case weekDays::Tuesday:
		return "Tuesday";
	case weekDays::Wednesday:
		return "Wednesday";
	case weekDays::Thursday:
		return "Thursday";
	case weekDays::Friday:
		return "Friday";
	case weekDays::Saturday:
		return "Saturday";
	default:
		return "Invalid day";
	}
}

int main() {
	cout << print(checkDays());
}