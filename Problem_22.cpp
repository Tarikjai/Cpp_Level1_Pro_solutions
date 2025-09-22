#include <iostream>
#include <string>
using namespace std;



void readAB(float& a, float& b)
{
	cout << "Please enter a: " << endl;
	cin >> a;
	cout << "Please enter h: " << endl;
	cin >> b;
}

float RectangleArea(float a, float b)
{
	float  P = 3.141592653589793238, Area;
	return Area = (P * b * b / 4) * ((2 * a - b) / (2 * a + b));
}


void printResult(float Area)
{
	cout << "Area: " << Area << endl;
}

int main()
{
	float a, h;
	readAB(a, h);
	printResult(RectangleArea(a, h));
}