#include <iostream>
#include <string>
using namespace std;


#include <iostream>
#include <string>
using namespace std;

struct personInfo {
	string FName;
	string LName;
};

personInfo readInfo()
{
	personInfo  Info;

	cout << "Your first Name is: " << endl;
	getline(cin, Info.FName);

	cout << "Your Last Name is: " << endl;
	getline(cin, Info.LName);
	return Info;
}


string getFullName(personInfo Info, bool Reversed)
{
	string FullName = "";
	if (Reversed)
		return	FullName = Info.FName + " " + Info.LName;
	else
		return	FullName = Info.LName + " " + Info.FName;
}


void printResult(string FullName)
{
	cout << "The FullName is: " << FullName;
}



int main()
{
	printResult(getFullName(readInfo(), false));
}