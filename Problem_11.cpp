#include <iostream>
#include <string>
using namespace std;

enum enResult { Pass = 1, Fail = 2 };

void ReadInput(int& Mark1, int& Mark2, int& Mark3)

{
	cout << "Please enter the Number1: " << endl;
	cin >> Mark1;
	cout << "Please enter the Number2: " << endl;
	cin >> Mark2;
	cout << "Please enter the Number3: " << endl;
	cin >> Mark3;
}

int sumNumbers(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}


float Average(int Mark1, int Mark2, int Mark3)
{
	return (float)sumNumbers(Mark1, Mark2, Mark3) / 3;
}

enResult passingResult(float average)
{
	if (average >= 50)
		return enResult::Pass;
	else
		return enResult::Fail;
}


void printResult(float average)
{
	cout << average << endl;


	if (passingResult(average) == enResult::Pass)
		cout << "Pass";
	else
		cout << "Fail";
}




int main()
{
	int Mark1, Mark2, Mark3;
	ReadInput(Mark1, Mark2, Mark3);
	printResult(Average(Mark1, Mark2, Mark3));
}