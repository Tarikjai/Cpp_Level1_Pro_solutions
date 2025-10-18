#include <iostream>
#include <ctime>
#include <string>
using namespace std;

struct enCoins {
	int Penny;
	int Nickel;
	int Dime;
	int Quarter;
	int Dollar;
};

enCoins ReadInput() {
	enCoins coins;
	cout << "Please enter Penny" << endl;
	cin >> coins.Penny;
	cout << "Please enter Nickel" << endl;
	cin >> coins.Nickel;
	cout << "Please enter Dime" << endl;
	cin >> coins.Dime;
	cout << "Please enter Quarter" << endl;
	cin >> coins.Quarter;
	cout << "Please enter Dollar" << endl;
	cin >> coins.Dollar;
	return coins;
}

int caclculatePennies(enCoins coins) {

	return   coins.Penny + (coins.Nickel * 5) + (coins.Dime * 10) + (coins.Quarter * 25) + (coins.Dollar * 100);
}


int main() {
	int pennies = caclculatePennies(ReadInput());

	cout << pennies << " Pennnies" << endl;
	cout << (float)pennies / 100 << " Dollars" << endl;
}
