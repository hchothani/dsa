/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */

// @lc code=start
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int k = r;
        while(l <= r){
            int mid = l + (r-l)/2;
            double hours = 0 ;
            for(auto pile : piles){
                hours+=ceil(static_cast<double>(pile)/mid);
            }
        //    cout << "hours for" << mid << " " << hours;
            if(hours <= h){
                k = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return k;
    }
};
// @lc code=end

