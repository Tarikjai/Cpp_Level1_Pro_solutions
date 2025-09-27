#include <iostream>
#include <string>
using namespace std;


float readNumber(string Message) {
	float number = 0;
	cout << Message << endl;
	cin >> number;
	return number;
}

float sumFunction() {
	int sum = 0, number = 0, counter = 1;

	do {
		number = readNumber("Please input the number: " + to_string(counter));

		if (number == -99) {
			break;
		}
		sum += number;
		counter += 1;
	} while (number != -99);

	return sum;

}

int main() {

	cout << sumFunction();
}