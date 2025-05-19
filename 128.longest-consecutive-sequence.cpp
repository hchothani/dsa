/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hs;
        for(auto num : nums) hs.insert(num);
        int mx = 0;
        for(auto num : hs){
            int lcs = 1;
            int curr = num;
            if(!hs.count(num-1)){
                bool flag = true;
                while(flag){
                    if(hs.count(curr+1)){
                        lcs++;
                        curr++;
                    }
                    else{
                        flag = false;
                        mx = max(mx, lcs);
                    }
                }
            }
        }
        return mx;
    }
};
// @lc code=end

