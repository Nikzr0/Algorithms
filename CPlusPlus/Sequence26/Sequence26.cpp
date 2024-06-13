#include <iostream>
using namespace std;

int main()
{
    long long n; cin >> n;

	if (n == 1)
	{
		cout << n << endl;
		return 0;
	}

	long long result = 0;

	for (size_t i = 1; i < n; i++)
	{
		result += i * 2 - 1;
	}

	 cout << result + n << endl;
	return 0;
}