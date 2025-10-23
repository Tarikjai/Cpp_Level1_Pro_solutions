#include <iostream>
#include <ctime>
#include <string>
using namespace std;


float ReadInput(string Message) {
	float input = 0;
	do {
		cout << Message << endl;
		cin >> input;
	} while (input <= 0);
	return input;
};

float calculate(float LA, float MP) {
	return LA / MP;
}

void PrintResult(float result) {
	cout << result << " Months";
}

int main() {

	float LA = ReadInput("Please Enter the Loan Amount");
	float MP = ReadInput("Please Enter the Monthly Payment");

	PrintResult(calculate(LA, MP));
}
