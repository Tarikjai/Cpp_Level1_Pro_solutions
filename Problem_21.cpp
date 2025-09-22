#include <iostream>
#include <string>
using namespace std;



float readAB()
{
	float l;
	cout << "Please enter L: " << endl;
	cin >> l;
	return l;
}


float CircleArea(float l)
{
	float  P = 3.141592653589793238, Area;
	return Area = pow(l, 2) / (4 * P);
}


void printResult(float Area)
{
	cout << "Area: " << Area << endl;
}

int main()
{


	printResult(CircleArea(readAB()));
}