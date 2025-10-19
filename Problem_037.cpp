#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int readNumber(string Message) {
	int input;

	cout << Message << endl;
	cin >> input;

	return input;
}

int sumFunction() {
	int Number = 0; int sum = 0; int counter = 1;
	do {
		if (Number == -99) {
			break;
		}
		sum += Number;
		Number = readNumber("Please insert the number " + to_string(counter));
		counter++;
	} while (Number != -99);

	return sum;
}

void printSum(int sum) {
	cout << sum;
}

int main() {
	printSum(sumFunction());

}