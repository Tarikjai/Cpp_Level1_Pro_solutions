#include <iostream>
#include <string>
using namespace std;

int readNumberInRange(int From, int To)
{
	int Grade;
	do
	{
		cout << "Please enter your Mark: " << endl;
		cin >> Grade;
	} while (Grade <= From || Grade >= To);
	return Grade;
}

char output(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

int main()
{
	cout << output(readNumberInRange(0, 100));
}