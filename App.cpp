#include <iostream>
#include <string>
using namespace std;

enum enCheck  { Prime=1, NotPrime=2};


int readNumber(string Message) {
	int Number;

	do {
		cout << Message << endl;
		cin >> Number;
		if (Number <= 0) {
			cout << "Number must be > 0! " << endl;
			cout << endl;
		}
	} while (Number <= 0);

	return Number;
}

enCheck CheckNumber(int Number) {
	
	int M = round(Number / 2);

	for (int counter = 2; counter <=  M ; counter++)
	{
		if (Number % counter == 0)
			return enCheck::NotPrime;
	}
	return enCheck::Prime;
}

void printResult(int Number) {
	 
	if (CheckNumber(Number) == enCheck::Prime)
		cout << "Prime";
	else
		cout << "Not Prime";
}


int main() {
	printResult(readNumber("Enter a positive Number: "));
}

















 