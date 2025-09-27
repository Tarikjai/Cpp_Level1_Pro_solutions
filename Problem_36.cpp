#include <iostream>
#include <string>
using namespace std;

enum operationType { ADD = '+', SUBTRACT = '-', MULTIPLY = '*', DIVIDE = '/' };

float readNumber(string message) {

	float number;
	cout << message << endl;
	cin >> number;
	return number;
}

operationType readOperationType() {

	char Optype;
	cout << "please enter the operation Type :" << endl;
	cin >> Optype;
	return (operationType)Optype;
}

float calculate(float Number1, float Number2, operationType Optype) {
	switch (Optype) {
	case operationType::ADD:
		return Number1 + Number2;
		break;
	case operationType::SUBTRACT:
		return Number1 - Number2;
		break;
	case operationType::MULTIPLY:
		return Number1 * Number2;
		break;
	case operationType::DIVIDE:
		return Number1 / Number2;
		break;
	}
}



int main()
{
	float Number1 = readNumber("Please insert Number1");
	float Number2 = readNumber("Please insert Number2");

	operationType Optype = readOperationType();

	cout << calculate(Number1, Number2, Optype);
}