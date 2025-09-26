#include <iostream>
#include <string>
using namespace std;

struct operation {
	float Number1 , Number2;
	char opType;
};


operation readNumbers() {

	operation operationNumbers;

	cout << "Input Number1: " << endl;
	cin >> operationNumbers.Number1;

	cout << "Input Number2: " << endl;
	cin >> operationNumbers.Number2;

	cout << "Input Operation type: " << endl;
	cin >> operationNumbers.opType;

	return operationNumbers;
}
 


float Operationfunction(operation operationNumbers ) {
	
	float result;
	
	switch (operationNumbers.opType == '+')
	     case '+':
             result = operationNumbers.Number1 + operationNumbers.Number2;
             break;
         case '-':
             result = operationNumbers.Number1 - operationNumbers.Number2;
             break;
         case '*':
             result = operationNumbers.Number1 * operationNumbers.Number2;
             break;
         case '/':
             // Penser à vérifier que y != 0 avant la division
             if (operationNumbers.y != 0)
                 result = operationNumbers.x / operationNumbers.y;
             else
                 result = 0; // ou une gestion d'erreur adaptée
             break;
         default:
             // éventuelle gestion d'erreur, opérateur inconnu
             result = 0;

}


int main()
{
 
}