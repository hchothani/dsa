/*
 * @lc app=leetcode id=853 lang=cpp
 *
 * [853] Car Fleet
 */

// @lc code=start
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
      vector<pair<int, double>> ti;
      for(int i = 0; i < position.size(); i++){
        double time = (double)(target - position[i]) / speed[i];
        ti.push_back({position[i], time});
      }  
      sort(ti.rbegin(), ti.rend());
      for(pair<int, float> p : ti){
        cout << "posi:" << p.first << "time:" << p.second << endl;
      }
      int count = 0;
      double slow = 0;
      for(pair<int, double> p : ti){
        if(p.second > slow ){
            count++;
            slow = p.second;
        }
    }
    return count;
};
};
// @lc code=end

