#include <iostream>
#include <string>
using namespace std;

struct strInfoPerson {
	int Age;
	bool HasDriverLicense;
};

strInfoPerson ReadInfo() {
	strInfoPerson InfoPerson;
	cout << "Please insert your Age: ";
	cin >> InfoPerson.Age;
	cout << "Do you have a driver License (1 or 0) ?  ";
	cin >> InfoPerson.HasDriverLicense;
	return InfoPerson;
}

bool CheckResult(strInfoPerson InfoPerson) {
	return  bool(InfoPerson.Age >= 21 && InfoPerson.HasDriverLicense);
}

void PrintResult(strInfoPerson InfoPerson) {
	if (CheckResult(InfoPerson) == 1)
		cout << "Accepted";
	else
		cout << "Rejected";
}





int main() {

	PrintResult(ReadInfo());
}
