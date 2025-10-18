#include <iostream>
#include <string>
using namespace std;

int readNumber() {
	int Number;
	do {
		cout << "Please insert Number: " << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int readM() {
	int M;
	do {
		cout << "Please insert M: " << endl;
		cin >> M;
	} while (M <= 0);
	return M;
}

int power(int Number, int M) {
	int result = Number;
	for (int i = 1; i < M; i++) {
		result *= Number;
	}
	return  result;
}

void print(int result) {
	cout << result;
}


int main() {
	int Number = readNumber();
	int M = readM();
	print(power(Number, M));
}