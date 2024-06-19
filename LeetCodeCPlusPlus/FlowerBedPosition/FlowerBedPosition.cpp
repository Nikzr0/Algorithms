#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool canPlaceFlowers(vector<int>& flowerbed, int n) {
		if (flowerbed.size() == 1)
		{
			if (flowerbed[0] == 0)
			{
				n--;
			}

			if (n <= 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		if (flowerbed.size() == 2)
		{
			if (flowerbed[0] == 0 && flowerbed[1] == 0)
			{
				n--;
			}


			if (n <= 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}


		if (flowerbed[0] == 0 && flowerbed[1] == 0)
		{
			flowerbed[0] = 1;
			n--;
		}

		if (flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0)
		{
			flowerbed[flowerbed.size() - 1] = 1;
			n--;
		}

		if (flowerbed.size() == 3)
		{
			if (n <= 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		for (int i = 2; i < flowerbed.size() - 2; i++)
		{
			int beforeElement = flowerbed[i - 1];
			int currElement = flowerbed[i];
			int nextElement = flowerbed[i + 1];

			if (beforeElement == 0 && currElement == 0 && nextElement == 0)
			{
				n--;
				if (i + 1 <= flowerbed.size() - 2)
				{
					i++;
				}
			}
		}

		if (n <= 0)
		{
			return true;
		}
		else
		{
			return false;
		}

		return 0;
	}

	int main()
	{
		Solution solution;
		vector<int> flowerbed = { 1,0,0,0, 0, 0, 1 };
		int n = 1;
		bool output = solution.canPlaceFlowers(flowerbed, n);
		cout << output;
		return 0;
	}
};