#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string readPIN(string Message) {
	string Input;
	cout << Message << endl;
	cin >> Input;
	return Input;
}


bool CheckAccount() {
	string PinCode;
	int counter = 3
		;

	do {
		counter--;
		PinCode = readPIN("Please Insert Your PIN: ");
		if (PinCode == "1234")
			return 1;
		else
			system("color 4f");
		cout << "Wrong Number" << endl;
		cout << endl;


	} while (PinCode != "1234" && counter > 0);
	return 0;
}

int main() {
	if (CheckAccount()) {
		return system("color 2F");
		cout << "Your Balance is : 7500";
	}
	else
		cout << "card is blocked";
}

//
//
//system("color 2A");