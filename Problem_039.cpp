#include <iostream>
#include <ctime>
#include <string>
using namespace std;


float readinput(string Message) {
	float input;
	do {
		cout << Message << endl;
		cin >> input;
	} while (input <= 0);
	return input;
}

float theRemainder(float TotalBill, float CashPaid) {
	return CashPaid - TotalBill;
}

void print(float result) {
	cout << result;
}


int main() {
	float TotalBill = readinput("Please insert the Total Bill: ");
	float CashPaid = readinput("Please insert the Cash Paid: ");

	print(theRemainder(TotalBill, CashPaid));

}