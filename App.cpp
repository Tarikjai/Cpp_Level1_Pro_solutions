#include <iostream>
#include <string>
using namespace std;


int readNumber() {
	int Number;
	do {
		cout << "Insert a positive number" << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;	
}

float divideNumber(int Number) {
	return (float)Number / 2;
}

 

void printResult(int Number) {
	cout <<   "Half of " + to_string(Number) + " is " + to_string(divideNumber(Number));;
}
int main() {

	printResult(readNumber());
}