#include <iostream>
#include <string>
using namespace std;



float readAB()
{
	float a;
	cout << "Please enter A: " << endl;
	cin >> a;
	return a;
}


float CircleArea(float a)
{
	float  P = 3.141592653589793238, Area;
	return Area = (P * pow(a, 2)) / 4;
}


void printResult(float Area)
{
	cout << "Area: " << Area << endl;
}

int main()
{


	printResult(CircleArea(readAB()));
}