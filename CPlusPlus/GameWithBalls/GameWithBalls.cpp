#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	int x;
	cin >> x;

	if (n % 2 == 0)
	{
		if (x == 2)
		{
			if (n % 6 == 0 || n % 6 == 5)
			{
				cout << 2 << endl;
			}
			else if (n % 6 == 1 || n % 6 == 4)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else if (x == 1)
		{
			if (n % 6 == 0 || n % 6 == 3)
			{
				cout << 1 << endl;
			}
			else if (n % 6 == 1 || n % 6 == 2)
			{
				cout << 2 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else
		{
			if (n % 6 == 0 || n % 6 == 1)
			{
				cout << 0 << endl;
			}
			else if (n % 6 == 2 || n % 6 == 5)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 2 << endl;
			}
		}
	}
	else
	{
		if (x == 2)
		{
			if (n % 6 == 0 || n % 6 == 1)
			{
				cout << 2 << endl;
			}
			else if (n % 6 == 2 || n % 6 == 5)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else if (x == 1)
		{
			if (n % 6 == 0 || n % 6 == 3)
			{
				cout << 1 << endl;
			}
			else if (n % 6 == 1 || n % 6 == 2)
			{
				cout << 0 << endl;
			}
			else
			{
				cout << 2 << endl;
			}
		}
		else
		{
			if (n % 6 == 0 || n % 6 == 5)
			{
				cout << 0 << endl;
			}
			else if (n % 6 == 1 || n % 6 == 4)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 2 << endl;
			}
		}
	}

}