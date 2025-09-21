#include <iostream>
#include <string>
using namespace std;



void readAB(float& a, float& b)
{
	cout << "Please enter a: " << endl;
	cin >> a;
	cout << "Please enter b: " << endl;
	cin >> b;
}

float RectangleArea(float a, float b)
{
	float Area;
	return Area = a * b;
}


void printResult(float Area)
{
	cout << "Area: " << Area << endl;
}

int main()
{
	float a, b;
	readAB(a, b);
	printResult(RectangleArea(a, b));
}