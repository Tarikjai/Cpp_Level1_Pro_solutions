#include <iostream>
#include <string>
using namespace std;


enum enNumberType { odd = 1, even = 2 };


int readInput()
{
	int input;
	cout << "Write your Input: " << endl;
	cin >> input;
	return input;
}

enNumberType checkOddEven(int input)
{
	if (input % 2 == 0)
		return enNumberType::even;
	else
		return enNumberType::odd;
}


int ForLoops(int input)
{
	int sum = 0;
	for (int i = 1; i <= input; i++)
		if (checkOddEven(i) == enNumberType::odd)
		{
			sum += i;
		};
	return sum;
}

int doWhile(int input)
{
	int i = 1, sum = 0;
	do
	{
		if (checkOddEven(i) == enNumberType::odd)
		{
			sum += i;
		};
		i++;
	} while (i <= input);


	return sum;
}

int whileLoops(int input)
{
	int i = 1, sum = 0;
	while (i <= input)
	{
		if (checkOddEven(i) == enNumberType::odd)
		{
			sum += i;
		};
		i++;
	}
	return sum;
}


int main()
{
	int N = readInput();
	cout << ForLoops(N) << endl;
	cout << doWhile(N) << endl;
	cout << whileLoops(N) << endl;
}