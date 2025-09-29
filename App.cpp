#include <iostream>
#include <string>
using namespace std;

float ReadBillValue(string Message) {
	float Number;

	do {
		cout << Message << endl;
		cin >> Number;
		if (Number <= 0) {
			cout << "Number must be > 0! " << endl;
			cout << endl;
		}
	} while (Number <= 0);

	return Number;
}

float CalculateCharge(float BillValue) {
	float BillWitchCharges = 0;
	return BillWitchCharges = BillValue * 1.10;
}

float CalculateSalesTax(float BillWitchCharges) {
	float FinalBil;
	return  FinalBil = BillWitchCharges * 1.16;
}

void printResult(float FinalBil) {
	cout << FinalBil;
}

int main() {
	float BillValue = ReadBillValue("Please enter the  BillValue : ");
	
	printResult(CalculateSalesTax(CalculateCharge(BillValue)));
	
}

