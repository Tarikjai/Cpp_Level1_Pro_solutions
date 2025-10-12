#include <iostream>
#include <string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadNumber(int& Number1, int& Number2, int& Number3) {
	cout << "Please type number1:" << endl;
	cin >> Number1;
	cout << "Please type number2:" << endl;
	cin >> Number2;
	cout << "Please type number3:" << endl;
	cin >> Number3;
}

int sumNumbers(int Number1, int Number2, int Number3) {
	return   Number1 + Number2 + Number3;
}

float average(int Number1, int Number2, int Number3) {
	return (float)sumNumbers(Number1, Number2, Number3) / 3;
}

enPassFail Checkresult(float average) {

	if (average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void printResult(float average) {
	cout << average << endl;
	if (Checkresult(average) == enPassFail::Pass)
		cout << "Pass" << endl;
	else
		cout << "Fail" << endl;
}

int main() {
	int Number1, Number2, Number3;
	ReadNumber(Number1, Number2, Number3);
	printResult(average(Number1, Number2, Number3));

}