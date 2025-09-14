#include <iostream>
#include <string>
using namespace std;




void ReadInput(int& Number1, int&  Number2, int&  Number3)

{
	cout << "Please enter the Number1: " << endl;
	cin >> Number1;
	cout << "Please enter the Number2: " << endl;
	cin >> Number2;
	cout << "Please enter the Number3: " << endl;
	cin >> Number3;
}

int sumNumbers(int Number1, int Number2, int Number3)
{
	return Number1 + Number2 + Number3;
}


float Average(int Number1, int Number2, int Number3)
{
	return (float)sumNumbers(Number1, Number2, Number3) / 3;
}

void printResult(int average)
{
	cout << average;
}


int main()
{
	int Number1, Number2, Number3;

	ReadInput(Number1, Number2, Number3);

	printResult(Average(Number1, Number2, Number3));
}