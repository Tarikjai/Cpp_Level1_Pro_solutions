#include <iostream>
#include <string>
using namespace std;

enum enNumberType { odd = 1, even = 2 };

int readInput()
{
	int Num;
	cout << "Please input the number: " << endl;
	cin >> Num;
	return Num;
}

enNumberType checkNumber(int Num)
{
	int result = Num % 2;
	if (result == 0)
	{
		return enNumberType::even;

	}
	else if (result == 1)
	{
		return enNumberType::odd;
	}
}

void printResult(enNumberType NumberType)
{
	if (NumberType == enNumberType::odd)
	{
		cout << "The number is odd " << endl;
	}
	if (NumberType == enNumberType::even)
	{
		cout << "The number is even " << endl;
	}
}

int main()
{
	printResult(checkNumber(readInput()));
}