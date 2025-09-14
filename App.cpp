#include <iostream>
#include <string>
using namespace std;

float ReadInput()
{
	int Number;
	cout << "Please enter a number: " << endl;
	cin >> Number;
	return Number;
}


float divideNumber(float Number)
{
	float result = Number / 2;;

	return result;
}

void printResult(float Number, float result)
{

	cout << "Half of " << Number << " is " << result << endl;
}

int main()
{
	printResult(divideNumber(ReadInput()));
}