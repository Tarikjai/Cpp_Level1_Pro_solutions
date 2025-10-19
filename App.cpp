#include <iostream>
#include <ctime>
#include <string>
using namespace std;

enum CheckPrime { Prime=1, NotPrime=2 };


int readNumber()  {
	int Number;
	do {
		cout << "Please enter a positive Number: " << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

CheckPrime checkNumber(int Number) {
	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++) {
		if (Number % counter == 0)
			return CheckPrime::NotPrime;
		else
			return CheckPrime::Prime;
	}
}

void printResult(int Number) {
	
	if ( checkNumber(Number) == CheckPrime::Prime)
		cout << "Prime";
	else  
		cout << "Not Prime";
}



 

int main() {
	
	printResult(readNumber());
}