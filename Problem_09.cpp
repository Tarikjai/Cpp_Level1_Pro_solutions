#include <iostream>
#include <string>
using namespace std;


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

void printResult(int total) {
	cout << total;
}

int main() {
	int Number1, Number2, Number3;
	ReadNumber(Number1, Number2, Number3);
	printResult(sumNumbers(Number1, Number2, Number3));

}