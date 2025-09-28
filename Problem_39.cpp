#include <iostream>
#include <string>
using namespace std;

float ReadInput(string Message) {
	float input;
	cout << Message << endl;
	cin >> input;
	return input;
}

float CalculateChange(float TotalBill, float Cashpaid) {

	return  Cashpaid - TotalBill;
}

int main() {
	float TotalBill = ReadInput("Please enter the Total bill: ");
	float Cashpaid = ReadInput("Please enter the Total Cashpaid: ");

	cout << CalculateChange(TotalBill, Cashpaid);
}

