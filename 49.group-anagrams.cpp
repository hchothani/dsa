/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> ht;
       for(auto s : strs){
        vector<int> cnt (26,0);
        for(auto c : s) cnt[c - 'a']++;
        string key = "";
        for(int i = 0; i < 26; i++) key = key + "," + to_string(cnt[i]);
        ht[key].push_back(s);
       } 
       vector<vector<string>> ans;
       for(auto pair : ht) ans.push_back(pair.second);
       return ans;
    }
};
// @lc code=end

