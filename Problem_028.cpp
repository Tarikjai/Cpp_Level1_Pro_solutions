//input % 2 == 0
#include <iostream>
#include <string>
using namespace std;

enum checkOddEven { odd = 1, even = 2 };

int readNumber() {
	int Number;
	do {
		cout << "Please type a number" << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

checkOddEven checkNumber(int Number) {
	if (Number % 2 == 0) {
		return checkOddEven::even;
	}
	else
		return checkOddEven::odd;
}

//int sumOdd(int Number) {
//	int Sum = 0;
//	for (int i = 1; i <= Number; i++) {
//		if (checkNumber(i) == checkOddEven::odd) {
//			Sum += i;
//		}
//	}
//
//	return Sum;
//}

//int doWhile(int Number) {
//	int Sum = 0;
//	int counter = 0;
//	do {
//	 
//		if (checkNumber(counter) == checkOddEven::odd) {
//			Sum += counter;
//			
//		}
//		counter++;
//	} while (counter <= Number);
//	return Sum;
//}

int whileLoops(int Number) {
	int Sum = 0;
	int counter = 1;
	while (counter <= Number) {
		if (checkNumber(counter) == checkOddEven::odd) {
			Sum += counter;

		}
		counter++;
	}
	return Sum;
}




void printResult(int Sum) {
	cout << Sum << endl;

}


int main() {
	int Number = readNumber();
	//printResult(sumOdd(Number));
	//printResult(doWhile(Number));
	printResult(whileLoops(Number));
}
