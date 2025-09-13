#include <iostream>
#include <string>
using namespace std;


#include <iostream>
#include <string>
using namespace std;

struct personInfo {
	int Age;
	bool HasDriverLicense;
	bool HasRecommendation;
};


personInfo readInfo()
{
	personInfo Info;
	cout << "Please type your age: " << endl;
	cin >> Info.Age;
	cout << "Type 1 if you have a driver license, 0 if not: " << endl;
	cin >> Info.HasDriverLicense;
	cout << "Do you have recommendation? " << endl;
	cin >> Info.HasRecommendation;
	return Info;
}

bool isAccepted(personInfo Info)
{
	if (Info.HasRecommendation)
	{
		return true;
	}
	else
	{
		return(Info.Age > 21 && Info.HasDriverLicense);
	}

}

void printResult(personInfo Info)
{
	if (isAccepted(Info))
	{
		cout << "Hired";
	}
	else
	{
		cout << "Rejected";
	}
}


int main()
{
	printResult(readInfo());
}