#include <iostream>
#include <string>
using namespace std;

struct strInfoPerson {
	string FirstName;
	string LastName;
};


strInfoPerson ReadFullName() {
	strInfoPerson PersonInfo;
	cout << "Type your First Name: " << endl;
	getline(cin, PersonInfo.FirstName);
	cout << "Type your Last Name: " << endl;
	getline(cin, PersonInfo.LastName);
	return PersonInfo;
}


string WriteFullname(strInfoPerson PersonInfo, bool reversed) {
	string FullName;
	if (reversed)
		return FullName = PersonInfo.LastName + " " + PersonInfo.FirstName;
	else 
		return FullName = PersonInfo.FirstName + " " + PersonInfo.LastName;
			
}

void printFullName(string FullName) {
	cout << FullName;
}



int main() {
	
	printFullName(WriteFullname(ReadFullName(), true));
}