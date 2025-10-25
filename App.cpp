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
	do {
		PinCode = readPIN("Please Insert Your PIN: ");
		if (PinCode == "1234")
			return 1;
		else 
			system("color 4f");
			cout << "Wrong Number" << endl;
			cout << endl;

	} while (PinCode != "1234");
}

int main() {
	if (CheckAccount()) {
		return system("color 2A");
		cout << "Your Balance is : 7500";
	}
}

//
//
//system("color 2A");