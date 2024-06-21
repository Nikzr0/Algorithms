#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        bool isntOrderd = true;
        int countOfZeros = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                countOfZeros++;
            }
        }

        while (isntOrderd)
        {
            for (int i = 0; i < nums.size(); i++)
            {

                if (nums[i] == 0)
                {
                    int temp = nums[i];
                    nums[i] = nums[i + 1];
                    nums[i + 1] = temp;
                }
            }

            for (int i = nums.size(); i >= 0; i--)
            {
                if (nums[i] == 0)
                {
                    countOfZeros--;
                }
                else
                {
                    break;
                }

                if (countOfZeros)
                {
                    isntOrderd = false;
                }
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
    }

    int main()
    {
        vector<int> nums = { 0, 1, 0, 3, 12 };
        moveZeroes(nums);
        return 0;
    }
};
