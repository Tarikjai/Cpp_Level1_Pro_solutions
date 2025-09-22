#include <iostream>
#include <string>
using namespace std;



void readAB(float& a, float& b, float& c)
{
	cout << "Please enter a: " << endl;
	cin >> a;
	cout << "Please enter b: " << endl;
	cin >> b;
	cout << "Please enter c: " << endl;
	cin >> c;
}

float circleArea(float a, float b, float& c)
{
	const float  PI = 3.141592653589793238;
	float p = (a + b + c) / 2;

	float t = (a * b * c) / (4.0 * sqrt(p * (p - a) * (p - b) * (p - c)));


	float Area = PI * pow(t, 2);
	return Area;
}


void printResult(float Area)
{
	cout << "Area: " << Area << endl;
}

int main()
{
	float a, h, c;
	readAB(a, h, c);
	printResult(circleArea(a, h, c));
}