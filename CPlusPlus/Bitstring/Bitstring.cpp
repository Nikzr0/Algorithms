#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string input; cin >> input;
	long long n; cin >> n;

	

	int numberOfZeros = 0;
	int numberOfOnes = 0;
	bool canGoInZero = true;
	bool canGoInOne = true;
	// 01100111011
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '0' && canGoInZero)
		{
			numberOfZeros++;
			canGoInZero = false;
			canGoInOne = true;
		}
		else if (input[i] == '1' && canGoInOne)
		{
			numberOfOnes++;
			canGoInOne = false;
			canGoInZero = true;
		}
	}


	string command;
	int number;
	for (long long i = 0; i < n; i++)
	{
		cin >> command;	
		cin >> number;	

		// 1100111011


	}
}