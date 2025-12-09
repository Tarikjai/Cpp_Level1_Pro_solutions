#include <iostream>
#include <string>
using namespace std;




string ReadName() {
	string Name;
	cout << "Please enter your Name:" << endl;
	cin >> Name;
	return Name;
}

void printName(string Name) {
	cout << "Your name is:" << Name << endl;
}



int main() {

	printName(ReadName());

}
