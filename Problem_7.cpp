#include <iostream>
#include <string>
using namespace std;

int ReadInput()
{
	int Number;
	cout << "Please enter a number: " << endl;
	cin >> Number;
	return Number;
}


float divideNumber(int Number)
{
	return (float)Number / 2;
}

void printResult(int Number)
{
	string result = "Half of " + to_string(Number) + " is " + to_string(divideNumber(Number));
	cout << result;

}

int main()
{
	printResult(ReadInput());
}