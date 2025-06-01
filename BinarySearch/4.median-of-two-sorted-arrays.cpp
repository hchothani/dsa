/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int l = 0;
        int r = nums1.size() - 1;
        double  median;
        int mid = l + (r-l)/2;
        cout << nums1.size();
        if(nums1.size() % 2 == 0){
             median = static_cast<double>(nums1[mid] + nums1[mid+1])/2;
        }
        else median = nums1[mid];
        return median;
    }
};
// @lc code=end

