#include <iostream>
#include <string>
using namespace std;

float ReadPositiveNumber(string Message) {
	float PositiveNumber;
	do {
		cout << Message << endl;
		cin >> PositiveNumber;
	} while (PositiveNumber <= 0);
	return PositiveNumber;
}

float TotalMonths(float LoanAmount, float MonthsNeeded) {
	return LoanAmount / MonthsNeeded;
}

int main() {
	float LoanAmount = ReadPositiveNumber("please insert your Loan Amount");
	float MonthsNeeded = ReadPositiveNumber("please insert the Months number");
	cout << TotalMonths(LoanAmount, MonthsNeeded) << " " << endl;
}
