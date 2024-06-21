#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int countOfZeroes = count(nums.begin(), nums.end(), 0);
        int counter = 0;

        if (nums.size() == countOfZeroes)
        {
            copy(nums.begin(), nums.end(), ostream_iterator<int>(cout, " "));
            return;
        }

        while (true)
        {
            for (int i = 0; i < nums.size() - 1; i++)
            {

                if (nums[i] == 0)
                {
                    int temp = nums[i];
                    nums[i] = nums[i + 1];
                    nums[i + 1] = temp;
                }
            }

            for (int i = nums.size() - 1; i >= nums.size() - countOfZeroes; i--)
            {
                if (nums[i] == 0)
                {
                    counter++;
                }
                else
                {
                    break;
                }
            }

            if (countOfZeroes == counter)
            {
                break;
            }
            counter = 0;
        }

        copy(nums.begin(), nums.end(), ostream_iterator<int>(cout, " "));
    }
};

int main() {
    //vector<int> nums = { 0, 1, 0, 3, 12 };
    vector<int> nums = { 0 };
    Solution solution;
    solution.moveZeroes(nums);
    return 0;
}
