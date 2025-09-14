#include <iostream>
#include <string>
using namespace std;



<<<<<<< HEAD
void ReadInput(int& Number1, int& Number2, int& Number3)
=======
void ReadInput(int& Number1, int&  Number2, int&  Number3)
>>>>>>> 6a68c0177049c1fd7f28df1075e395391741e6a8
{
	cout << "Please enter the Number1: " << endl;
	cin >> Number1;
	cout << "Please enter the Number2: " << endl;
	cin >> Number2;
	cout << "Please enter the Number3: " << endl;
	cin >> Number3;
}

int sumNumbers(int Number1, int Number2, int Number3)
{
	return Number1 + Number2 + Number3;
}

void printResult(int total)
{
<<<<<<< HEAD
	cout << total;
=======
	cout << total;	
>>>>>>> 6a68c0177049c1fd7f28df1075e395391741e6a8
}


int main()
{
	int Number1, Number2, Number3;
<<<<<<< HEAD
	ReadInput(Number1, Number2, Number3);
=======
	ReadInput( Number1,  Number2,  Number3);
>>>>>>> 6a68c0177049c1fd7f28df1075e395391741e6a8
	printResult(sumNumbers(Number1, Number2, Number3));
}