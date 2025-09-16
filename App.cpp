#include <iostream>
#include <string>
using namespace std;

struct strNumbers {
	int Num1;
	int Num2;
};

strNumbers ReadInput()

{
	strNumbers Numbers;
	cout << "Please enter the Number1: " << endl;
	cin >> Numbers.Num1;
	cout << "Please enter the Number2: " << endl;
	cin >> Numbers.Num2;
	return Numbers;
}


int checkResult(strNumbers Numbers)
{
	if (Numbers.Num1 > Numbers.Num2)
		return Numbers.Num1;
	else
		return Numbers.Num2;
}
void prin

int main()
{
	ReadInput();
	
}