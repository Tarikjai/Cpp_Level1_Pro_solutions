#include <iostream>
#include <string>
using namespace std;

int readN(string message)
{
	int N;
	do {
		cout << message << endl;
		cin >> N;
	} while (N < 0);

	return N;
}

int sumNumbers(int N)
{
	int sum = 1;
	for (int i = N; i >= 1; i--)
	{
		sum *= i;
	}
	return sum;
}

void printResult(int sum)
{
	cout << sum;
}


int main()
{

	printResult(sumNumbers(readN("Enter a number: ")));
}