#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	//int n; cin >> n;

	string input;
	cin >> input;

	vector<char> letters(input.begin(), input.end());
	int ab = 0;
	int cd = 0;
	int output = 0;

	bool isAB = true;
	bool isCD = true;


	bool keyToAB = true;
	bool KeyToCD = true;

	int counterToRemove = 0;

	for (char letter : letters) {
		if (letter == 'a' || letter == 'b')
		{
			if (keyToAB)
			{
				if (!isAB)
				{
					keyToAB = false;
					cd--;
					if (cd < 0)
					{
						cout << output << endl;
					}

					ab++;

					if (cd == 0)
					{
						output += ab * 2;

						ab = 0;
						cd = 0;

						isAB = true;
						isCD = true;

						keyToAB = true;
						KeyToCD = true;
					}
				}
				else
				{
					ab++;
				}
			}
			else
			{
				cout << output;
				return 0;
			}
		}
		else
		{
			if (KeyToCD)
			{
				if (!isCD)
				{
					keyToAB = false;
					ab--;
					if (ab < 0)
					{
						cout << output << endl;
					}

					cd++;

					if (ab == 0)
					{
						output += cd * 2;

						ab = 0;
						cd = 0;

						isAB = true;
						isCD = true;

						keyToAB = true;
						KeyToCD = true;
					}
				}
				else
				{
					cd++;
				}
			}
			else
			{
				cout << output;
				return 0;
			}
		}

		if (cd != 0)
		{
			isAB = false;
		}

		if (ab != 0)
		{
			isCD = false;
		}
	}

	cout << output << endl;
	return 0;
}