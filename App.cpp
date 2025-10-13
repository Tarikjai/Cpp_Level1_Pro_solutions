#include <iostream>
#include <string>
using namespace std;

int readNumber() {
	int Number;
	do {
		cout << "Please insert a number:" << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int main() {

}