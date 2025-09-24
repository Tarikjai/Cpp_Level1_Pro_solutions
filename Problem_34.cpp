#include <iostream>
#include <string>
using namespace std;


int readTotalSales()
{
	int TotalSales;
	cout << "Enter your TotalSales: " << endl;
	cin >> TotalSales;
	return TotalSales;
}

float GetComissionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return  0.02;
	else if (TotalSales >= 100000)
		return  0.03;
	else if (TotalSales >= 50000)
		return  0.05;
	else
		return 0.00;

}

float printResult(float TotalSales)
{

	return GetComissionPercentage(TotalSales) * TotalSales;
}



int main()
{
	int  TotalSales = readTotalSales();

	cout << "Percentage is :" << GetComissionPercentage(TotalSales) << endl;

	cout << endl;
	cout << endl;

	cout << "Comission is :" << printResult(TotalSales) << endl;
	cout << endl;
	cout << endl;



}