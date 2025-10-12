#include <iostream>
#include <string>
using namespace std;


void ReadNumber(int& Number1, int& Number2) {
	cout << "Please type number1:" << endl;
	cin >> Number1;
	cout << "Please type number2:" << endl;
	cin >> Number2;
}

int checkMaxNumber(int Number1, int Number2) {
	int max;
	if (Number1 > Number2)
		return max = Number1;
	else
		return max = Number2;
}

void printResult(int max) {
	cout << max;
}

int main() {
	int Number1, Number2;
	ReadNumber(Number1, Number2);

	printResult(checkMaxNumber(Number1, Number2));

}