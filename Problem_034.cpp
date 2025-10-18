#include <iostream>
#include <string>
using namespace std;

float readTotalSales() {
	float TotalSales;
	do {
		cout << "Please enter Mark: " << endl;
		cin >> TotalSales;
	} while (TotalSales <= 0);
	return TotalSales;
}

float percentage(float TotalSales) {

	if (TotalSales >= 1000000)
		return   0.01;
	else if (TotalSales >= 500000)
		return   0.02;
	else if (TotalSales >= 100000)
		return   0.03;
	else if (TotalSales >= 50000)
		return   0.05;
	else
		return 0;

}

float calculateCommision(float TotalSales) {
	return percentage(TotalSales) * TotalSales;
}



int main() {
	int TotalSales = readTotalSales();

	cout << "Percentage is : " << percentage(TotalSales) << endl;
	cout << "Commision is : " << calculateCommision(TotalSales);
}