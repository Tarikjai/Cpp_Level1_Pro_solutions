#include <iostream>
#include <string>
using namespace std;

void ReadInput(float& A, float& B){
	cout << "Please enter the a: " << endl;
	cin >> A;
	cout << "Please enter the b: " << endl;
	cin >> B;
}

float RectangleArea(float A, float B)
{
	return A * B;
}

void printResult(float result)
{
	cout << result << endl;
	
}

int main()
{
	float A, B;
	ReadInput(A, B);
	printResult(RectangleArea( A,  B));
}