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
	for (int i = 1; i <= input; i++)
		cout << i << endl;
}

void doWhile(int input)
{
	int i = 1;
	do
	{
		cout << i << endl;
		i++;
	} while (i <= input);
}

void whileLoops(int input)
{
	int i = 1;
	while (i <= input)
	{
		cout << i << endl;
		i++;
	}
}

int main()
{
	int N = readInput();
	ForLoops(N);
	doWhile(N);
	whileLoops(N);
}