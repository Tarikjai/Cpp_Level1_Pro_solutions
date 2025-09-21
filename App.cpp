#include <iostream>
#include <string>
using namespace std;

void readInput(int& Num1, int& Num2)
{
	cout << "Enter Number1: " << endl;
	cin >> Num1;
	cout << "Enter Number2: " << endl;
	cin >> Num2;
  }

void swapFunction(int& Num1, int& Num2)
{
	int Swap;
	Swap = Num1;
	Num1 = Num2;
	Num2 = Swap;
}

void printResult(int Num1, int Num2)
{
	cout << Num1 << endl;
	cout << Num2 << endl;
}


int main()
{
	int Num1, Num2;
	readInput(Num1, Num2);
	swapFunction(Num1, Num2);
	printResult(Num1, Num2);

}