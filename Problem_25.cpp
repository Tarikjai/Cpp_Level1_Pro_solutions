#include <iostream>
#include <string>
using namespace std;


int readAge()
{
	int Number;
	cout << "Write your Age: " << endl;
	cin >> Number;
	return Number;
}

bool ValidateAge(int Number, int From, int To)
{
	return (Number > From && Number < To);
}

int readUntilAgeBetween(int From, int To)
{
	int Age;

	do
	{
		Age = readAge();
	}

	while (!ValidateAge(Age, From, To));

	return Age;

}

void PrintRsult(int Age)
{

	cout << "Valid Age" << Age;

}



int main()
{
	PrintRsult(readUntilAgeBetween(18, 45));
	return 0;
}