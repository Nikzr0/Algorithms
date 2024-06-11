#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n; cin >> n;

	string input;
	cin >> input;

	vector<char> letters(input.begin(), input.end());
	int ab = 0;
	int cd = 0;
	
	for (char letter : letters) {
		if (letter == 'a' || letter == 'b')
		{
			ab++;
		}
		else if (letter == 'c' || letter == 'd')
		{
			cd++;
		}
	}

	while (true || ab == 0 || cd ==0)
	{
		if (ab == cd)
		{
			cout << ab + cd;
			break;
		}

		char lastLetter = letters.back();

		if (lastLetter == 'a' || lastLetter == 'b')
		{
			ab--;
			letters.pop_back();
		}
		else if (lastLetter == 'c' || lastLetter == 'd')
		{
			cd--;
			letters.pop_back();
		}
	}
}