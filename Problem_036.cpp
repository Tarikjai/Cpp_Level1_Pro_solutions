#include <iostream>
#include <ctime>
#include <string>
using namespace std;


enum enOperation { ADD = '+', SUBSTRUCT = '-', MULTIPLY = '*', DIVIDE = '/' };


float readNumber() {
	float Number;
	cout << "Please insert a number: " << endl;
	cin >> Number;
	return Number;
}

enOperation readOperationType() {
	char operationType;
	cout << "Please insert the OperationType: " << endl;
	cin >> operationType;
	return (enOperation)operationType;
}


float function(float Number1, float Number2, enOperation operationType) {

	switch (operationType) {
	case enOperation::ADD:
		return Number1 + Number2;
		break;
	case enOperation::SUBSTRUCT:
		return Number1 - Number2;
		break;
	case enOperation::MULTIPLY:
		return Number1 * Number2;
		break;
	case enOperation::DIVIDE:
		return Number1 / Number2;
		break;
	}

}


int main() {
	float Number1 = readNumber();
	float Number2 = readNumber();

	enOperation ope = readOperationType();

	cout << function(Number1, Number2, ope);

}