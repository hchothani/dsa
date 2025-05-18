/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> ht;
       for(auto num : nums) ht[num]++;
       vector<pair<int,int>> vp;
       for(auto it : ht){
        vp.push_back({it.second, it.first});
       }
       sort(vp.rbegin(), vp.rend());
       vector<int> ans;
       for(int i = 0; i < k; i++){
        ans.push_back(vp[i].second);
       }
       return ans;

}
};
// @lc code=end

