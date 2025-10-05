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

float TotalMonths(float LoanAmount, float MonthlyPayment) {

	return LoanAmount / MonthlyPayment;
}



int main() {

	float LoanAmount = ReadPositiveNumber("please insert your Loan Amount");
	float MonthlyPayment = ReadPositiveNumber("please insert your Monthly Payment");

	cout << TotalMonths(LoanAmount, MonthlyPayment) << " Months" << endl;
}
