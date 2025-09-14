#include <iostream>
#include <string>
using namespace std;

enum enResult {Pass=1 , Fail=2};

int ReadInput()
{
	int Mark;
	cout << "Please enter the Mark: " << endl;
	cin >> Mark;
	return Mark;
}

enResult checkResult(int Mark)
{
	if (Mark >= 50)
		return enResult::Pass;
	else
		return enResult::Fail;
}

void printResult(int Mark)
{
	if (checkResult(Mark) == enResult::Pass)
		cout << "Pass";
	else 
		cout << "Fail";
}

int main()
{
	printResult(ReadInput());
}