#include <iostream>
#include <string>
using namespace std;

 

void ReadInput(int& Num1, int& Num2)

{
	cout << "Please enter the Number1: " << endl;
	cin >> Num1;
	cout << "Please enter the Number2: " << endl;
	cin >> Num2;
}


int checkResult(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}
 

int main()
{
	int Num1, Num2;
	ReadInput(Num1,Num2);
	cout << checkResult(Num1, Num2);
}