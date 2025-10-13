#include <iostream>
#include <string>
using namespace std;

int ReadInput() {
	int Age;
	cout << "Please write your Age: " << endl;
	cin >> Age;
	return Age;
}

bool calculate(int Age, int From, int To) {
	return (Age >= From && Age <= To);
}

bool validatAge(int From, int To) {
	int Age;

	do {
		Age = ReadInput();
	} while (!calculate(Age, From, To));
	return Age;
}


void printResult(int Age) {

	cout << "Valid Age" << endl;

}

int main() {
	printResult(validatAge(18, 45));
}