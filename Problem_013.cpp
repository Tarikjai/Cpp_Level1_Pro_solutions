#include <iostream>
#include <string>
using namespace std;



void ReadInput(int& Num1, int& Num2, int& Num3)

{
	cout << "Please enter the Number1: " << endl;
	cin >> Num1;
	cout << "Please enter the Number2: " << endl;
	cin >> Num2;
	cout << "Please enter the Number3: " << endl;
	cin >> Num3;
}


int checkResult(int Num1, int Num2, int Num3)
{
	int max;
	if (Num1 > Num2 && Num1 > Num3)
		return max = Num1;
	else if (Num2 > Num1 && Num2 > Num3)
		return max = Num2;
	else
		return max = Num3;
}

void printResult(int max)
{
	cout << max;
}

int main()
{
	int Num1, Num2, Num3;
	ReadInput(Num1, Num2, Num3);

	printResult(checkResult(Num1, Num2, Num3));
}