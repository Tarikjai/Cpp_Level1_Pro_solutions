#include <iostream>
#include <string>
using namespace std;



float readAB()
{
	float r;
	cout << "Please enter r: " << endl;
	cin >> r;
	return r;
}


float CircleArea(float r)
{
	float  P = 3.141592653589793238, Area;
	return Area = P * pow(r, 2);
}


void printResult(float Area)
{
	cout << "Area: " << Area << endl;
}

int main()
{


	printResult(CircleArea(readAB()));
}