#include <iostream>
#include <string>
using namespace std;

int readNumber() {
	int Number;
	do {
		cout << "Please insert a number:" << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}



int factorial(int Number) {
	int output=1;
	for (int i = Number; i >= 1; i--) {
		output *= i;
	}
	return output;
}

void printResult(int output) {
	cout << output << endl;
}
int main() {
	int Number = readNumber();
	printResult(factorial(Number));
}