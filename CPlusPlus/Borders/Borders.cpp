#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;

	int output = 0;

	vector<int> positions(m + 1, 0);

	for (int i = 0; i < n; ++i) {
		int soldierPossition; cin >> soldierPossition;
		if (positions[soldierPossition] == 0)
		{
			positions[soldierPossition]++;
		}
	}

	for (int i = 2; i < m + 1; i++)
	{
		if (positions[i] == 0)
		{
			output++;	

			if (positions[i - 1] > 0)
			{
				output--;
			}
		}
		else
		{
			i++;
		}
	}

	cout << output << endl;
}