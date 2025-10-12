#include <iostream>
#include <string>
using namespace std;

void ReadInput(int& Num1, int& Num2) {
	cout << "Please enter the Number1: " << endl;
	cin >> Num1;
	cout << "Please enter the Number2: " << endl;
	cin >> Num2;
}

void swapFunction(int& Num1, int& Num2)
{
	int swap;
	swap = Num1;
	Num1 = Num2;
	Num2 = swap;
}

void printResult(int Num1, int Num2)
{
	cout << Num1 << endl;
	cout << Num2 << endl;
}

int main()
{
	int Num1, Num2;
	ReadInput(Num1, Num2);
	swapFunction(Num1, Num2);
	printResult(Num1, Num2);
}