#include <iostream>
#include <string>
using namespace std;

enum enNumbertype { odd=1 , even=2};

int readNumber()
{
	int Num;
	cout << "Please input the number: " << endl;
	cin >> Num;
	return Num;
}

enNumbertype enNumberType(int Num)
{
	int result = Num % 2 ;
	if (result == 0)
	{
		return enNumbertype::even;
	}
	else if (result == 1)
	{
		return enNumbertype::odd;
	}
}

void printResult(enNumbertype NumType)
{
	if (NumType == enNumbertype::even)
	{
		cout << "Number is Even " << endl;
	}
	else if (NumType == enNumbertype::odd)
	{
		cout << "Number is Odd " << endl;
	}
}


int main()
{
	printResult(enNumberType(readNumber()));
}