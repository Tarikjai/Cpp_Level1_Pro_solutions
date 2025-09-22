#include <iostream>
#include <string>
using namespace std;


int readInput()
{
	int input;
	cout << "Write your Input: " << endl;
	cin >> input;
	return input;
}

void ForLoops(int input)
{
	for (int i = input; i >= 1; i--)
		cout << i << endl;
}

void doWhile(int input)
{
	int i = input;
	do
	{
		cout << i << endl;
		i--;
	} while (i >= 1);
}

void whileLoops(int input)
{
	int i = input;
	while (i >= 1)
	{
		cout << i << endl;
		i--;
	}
}

int main()
{
	int N = readInput();
	ForLoops(N);
	doWhile(N);
	whileLoops(N);
}