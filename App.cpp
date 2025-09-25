#include <iostream>
#include <string>
using namespace std;


struct coin {
	int pennies;
    int nickels;
    int dime;
    int quarter;
    int dollars;
};

coin readPennies()
{
    coin coinNumbers;
    cout << "Please enter the number of pennis you have : \n";
    cin >>  coinNumbers.pennies;

    cout << "Please enter the number of nickels you have : \n";
    cin >> coinNumbers.nickels;

    cout << "Please enter the number of dime you have : \n";
    cin >> coinNumbers.dime;

    cout << "Please enter the number of quarter you have : \n";
    cin >> coinNumbers.quarter;

    cout << "Please enter the number of dollar you have : \n";
    cin >> coinNumbers.dollars;

    return coinNumbers;
}

float calculateTotalPennies(coin coinNumbers) {
    return  coinNumbers.pennies + (coinNumbers.nickels * 5) + (coinNumbers.dime * 10) + (coinNumbers.quarter * 25) + (coinNumbers.dollars * 100);
}

int main()
{
    int totalPennies = calculateTotalPennies(readPennies());
    
    cout << endl << totalPennies << " Pennies";
    cout << endl << float(totalPennies) / 100 << " Dollars";

}