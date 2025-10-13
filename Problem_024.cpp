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
	return (Age > From && Age < To);
}

void printResult(int Age) {
	if (calculate(Age, 18, 45) == 1) {
		cout << "Valid Age" << endl;
	}
	else
		cout << "Invalid Age" << endl;
}

int main() {
	printResult(ReadInput());
}