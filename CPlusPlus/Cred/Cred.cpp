#include <iostream>
#include <string>

using namespace std;

int main()
{
	int start, end;
	cin >> start >> end;

	if (end == 1)
	{
		cout << 1 << endl;
		return 0;
	}

	int output = 1;

	while (start <= end)
	{
		int temp = start;
		for (size_t i = 0; i < to_string(start).length(); i++)
		{
			start += temp % 10;
			temp /= 10;
		}
		output++;
	}

	cout << output - 1 << endl;
}
