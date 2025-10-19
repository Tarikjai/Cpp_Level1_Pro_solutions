#include <iostream>
#include <ctime>
#include <string>
using namespace std;


float readinput(string Message) {
	float TotalBill;
	do {
		cout << Message << endl;
		cin >> TotalBill;
	} while (TotalBill <= 0);
	return TotalBill;
}

float servicesfee(float TotalBill) {
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;

	return  TotalBill;
}




int main() {
	float TotalBill = readinput("Please insert the Bill Value: ");
	cout << "Total bill: " << TotalBill << endl;

	cout << servicesfee(TotalBill);


}