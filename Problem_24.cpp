#include <iostream>
#include <string>
using namespace std;

int readAge(){
	int Number;
	cout << "Write your Age: " << endl;
	cin >> Number;
	return Number;
}

bool ValidateAge(int Number, int From, int To){
	return (Number > From && Number < To);
}

void PrintRsult(int Age){
	if (ValidateAge(Age, 18, 45) == 1)
		cout << "Valid Age";
	else
		cout << "Invalid Age";
}

int main(){
	PrintRsult(readAge());
	return 0;
}