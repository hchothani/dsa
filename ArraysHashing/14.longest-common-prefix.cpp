/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string pref = "";
       int numstr = strs.size();
       int minsize = 201;
       for(int i = 0; i < numstr; i++) minsize = min(minsize, (int)strs[i].size());
       for(int i = 0; i < minsize; i++){
        int flag = 1;
        char ch = strs[0][i];
        for(int j = 0; j < numstr; j++){
            if(ch != strs[j][i]){
                flag = 0;
                break;
            }
        }
        if (flag == 1) pref.push_back(ch);
        else break;
       }
       return pref;

    }
};
// @lc code=end

