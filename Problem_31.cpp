#include <iostream>
#include <string>
using namespace std;


int readr()
{
	int N;
	cout << "Please enter N: " << endl;
	cin >> N;
	return N;
}

void Outputs(int N)
{
	cout << pow(N, 2) << endl;
	cout << pow(N, 3) << endl;
	cout << pow(N, 4) << endl;
}



int main()
{


	Outputs(readr());
}