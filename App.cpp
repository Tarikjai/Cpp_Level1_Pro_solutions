#include <iostream>
#include <string>
using namespace std;

int readNumber() {
	int Number;
	do {
		cout << "Please insert a number: " << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void print(int Number) {
	int a, b, c;
	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;	 
	cout << a << " " << b << " " << c << endl;
} 


int main() {
	print(readNumber());
}