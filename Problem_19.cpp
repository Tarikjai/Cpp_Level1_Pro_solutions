#include <iostream>
#include <string>
using namespace std;



float readAB()
{
	float d;
	cout << "Please enter D: " << endl;
	cin >> d;
	return d;
}


float CircleArea(float d)
{
	float  P = 3.141592653589793238, Area;
	return Area = (P * pow(d, 2)) / 4;
}


void printResult(float Area)
{
	cout << "Area: " << Area << endl;
}

int main()
{


	printResult(CircleArea(readAB()));
}