#include <iostream>
#include <string>
using namespace std;

int ReadInput() {
	int number;
	do {
		cout << "Please write a number: " << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}

void ForLoops(int number) {

	for (int i = 1; i <= number; i++) {
		cout << i;
		cout << endl;
	}
	cout << endl;
}

void doWhile(int number) {
	int i = 1;
	do {
		cout << i << endl;
		i++;
	} while (i <= number);
	cout << endl;
}

void whileLoops(int number) {
	int i = 1;
	while (i <= number) {
		cout << i << endl;
		i++;
	}
}



int main() {
	int  Input = ReadInput();
	ForLoops(Input);
	doWhile(Input);
	whileLoops(Input);
}