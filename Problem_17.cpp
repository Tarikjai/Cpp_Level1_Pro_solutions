#include <iostream>
#include <string>
using namespace std;



void readAB(float& a, float& h)
{
	cout << "Please enter a: " << endl;
	cin >> a;
	cout << "Please enter h: " << endl;
	cin >> h;
}

float RectangleArea(float a, float h)
{
	float Area;
	return Area = 0.5 * a * h;
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