/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (nums[i] == nums[i + 1])
        //         return nums[i];
        // }
        // return -1;

        // Different Hash Set Approach
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[abs(nums[i])] < 0)
                return abs(nums[i]);
            nums[abs(nums[i])] *= -1;
        }
        return -1;
    }
};

// Intuition
/*
If you want to create a hash set in a vector without using extra space.
Use index to mark which integer has been seen
*/
// @lc code=end
