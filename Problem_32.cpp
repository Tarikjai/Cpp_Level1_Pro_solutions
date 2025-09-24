#include <iostream>
#include <string>
using namespace std;


int readN()
{
	int N;
	cout << "Please enter N: " << endl;
	cin >> N;
	return N;
}


int readM()
{
	int M;
	cout << "Please enter M: " << endl;
	cin >> M;
	return M;
}

int powerM(int N, int M)
{
	if (M == 0)
	{
		return 1;
	}

	int P = 1;
	for (int i = 1; i <= M; i++)
	{
		P = P * N;
	}
	return P;
}



int main()
{

	int N = readN();
	int M = readM();
	cout << powerM(N, M);

}