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
	int counter = 3;

	do {
		counter--;
		PIN = ReadPin();
		if (PIN == "1234")
		{
			return 1;
		}
		else {
			system("color 4F");
			cout << "Wrong PIN, you have "<< counter << " more tries" << endl;
			cout << endl;
		 
		}

	} while (counter >= 1 && PIN != "1234");
	return 0;
}

int main() {

	if (Login()) {
		system("color 2F");
		cout << "Your Balance is: 7500" << endl;
	}
	else {
		cout << "Card is locked" << endl;
	}


}
