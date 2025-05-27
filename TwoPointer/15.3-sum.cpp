/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> ans;
       sort(nums.begin(), nums.end());
       int n = nums.size();
        for(int i = 0; i < n-2; i++){
            int l = i+1;
            int r = n-1;
            if(i>0 && nums[i] == nums[i-1]) continue;
            while(l < r){
               int sum = nums[i] + nums[l] + nums[r];
               if(sum == 0){
                    ans.push_back({nums[i], nums[l], nums[r]});
                    while(l < r && nums[l] == nums[l+1]) l++;
                    while(l < r && nums[r] == nums[r-1]) r--;
                    l++;
                    r--;
                } 
                else if(sum > 0) r--;
                else{
                    l++;
                }
            }
        }

        return ans;
    }
};
// @lc code=end

