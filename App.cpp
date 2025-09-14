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

void printResult(int total)
{

	cout << total;



}


int main()
{
	int Number1, Number2, Number3;

	ReadInput(Number1, Number2, Number3);

	printResult(sumNumbers(Number1, Number2, Number3));
}