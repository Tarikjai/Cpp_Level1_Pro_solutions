#include <iostream>
#include <string>
using namespace std;

string ReadPin() {
	string PIN;
	cout << "Insert Your PIN" << endl;
	cin >> PIN;
	return PIN;
}

bool Login() {
	string PIN;
	do {
		PIN = ReadPin();
		if (PIN == "1234")
		{
			return 1;
		}
		else {
			system("color 4F");
		}

	} while (PIN != "1234");

}

int main() {

	if (Login()) {
		system("color 2F");
		cout << "Your Balance is: 7500" << endl;
	}


}
