#include <iostream>
#include <string>
using namespace std;

enum EnPassFail { pass = 1, fail = 2 };

int readMark() {
	int Mark;
	do {
		cout << "Insert your Mark: " << endl;
		cin >> Mark;
	} while (Mark <= 0);
	return Mark;
}

EnPassFail CheckMark(int Mark) {

	if (Mark >= 50)
		return EnPassFail::pass;
	else
		return EnPassFail::fail;
}
void printResult(int Mark) {

	if (CheckMark(Mark) == EnPassFail::pass)
		cout << "PASS";
	else
		cout << "Fail";
}


int main() {

	printResult(readMark());
}