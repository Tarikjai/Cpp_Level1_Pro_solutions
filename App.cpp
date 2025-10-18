#include <iostream>
#include <string>
using namespace std;

int readNumberInrange(int From, int To) {
	int Grade;
	do {
		cout << "Please enter Mark: " << endl;
		cin >> Grade;
	} while (Grade <= From || Grade >= To);
	return Grade;
}

char printResult(int Grade) {

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

int main() {
	cout << printResult(readNumberInrange(0, 100));
}