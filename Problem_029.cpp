
#include <iostream>
#include <string>
using namespace std;

enum checkOddEven { odd = 1, even = 2 };

int readNumber() {
	int Number;
	do {
		cout << "Please insert a number:" << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

checkOddEven checkEven(int Number) {
	if (Number % 2 != 0)
		return checkOddEven::odd;
	else
		return checkOddEven::even;
}

//
//int forLoops(int Number) {
//	int Sum=0;
//	for (int i = 0; i <= Number; i++) {
//		if (checkEven(i) == checkOddEven::even) {
//			Sum += i;
//		}
//		
//	}
//	return Sum;
//}

//int doWhile(int Number) {
//	int Sum = 0;
//	int counter = 0;
//	do {
//		if (checkEven(counter) == checkOddEven::even)  {
//			Sum += counter;
//		}
//		counter++;
//	} while (counter <= Number);
//	return Sum;
//}

int whileLoops(int Number) {
	int Sum = 0;
	int counter = 0;
	while (counter <= Number) {
		if (checkEven(counter) == checkOddEven::even) {
			Sum += counter;
		}
		counter++;
	}
	return Sum;
}

void printResult(int Sum) {
	cout << Sum;
}



int main() {
	int Number = readNumber();
	//printResult(sumOdd(Number));
	//printResult(doWhile(Number));
	printResult(whileLoops(Number));
}