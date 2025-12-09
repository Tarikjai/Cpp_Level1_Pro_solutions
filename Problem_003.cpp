#include <iostream>
#include <string>
using namespace std;

enum CheckOddEven { odd=1, even=0};

int readNumber() {
	int Number;
	do {
		cout << "Please enter a positive number: " << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}


CheckOddEven checkNumber(int Number) {
	
	if (Number % 2 != 0)
		return CheckOddEven::odd;
	else
		return CheckOddEven::even;
}

void printResult(CheckOddEven Number) {
	CheckOddEven check;
	if (check == CheckOddEven::odd)
		cout << "Odd";
	else
		cout << "Even";
}


int main() {
	int Number = readNumber();
	printResult(checkNumber(Number));

}
