#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    
    

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<int> sortedArray = candies;
        vector<bool> output(candies.size());
        sort(sortedArray.begin(), sortedArray.end());

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= sortedArray[sortedArray.size() - 1])
            {
                output[i] = true;
			}
			else
			{
				output[i] = false;
            }
        }

        return output;
    }

    int main()
    {
        Solution solution;
		vector<int> candies = { 2,3,5,1,3 };
		int extraCandies = 3;
		vector<bool> output = solution.kidsWithCandies(candies, extraCandies);
        for (int i = 0; i < output.size(); i++)
        {
			cout << output[i] << " ";
		}
		return 0;
    }
};

