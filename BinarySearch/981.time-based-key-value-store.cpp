/*
 * @lc app=leetcode id=981 lang=cpp
 *
 * [981] Time Based Key-Value Store
 */

// @lc code=start
class TimeMap {
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        ht_[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto& v = ht_[key];
        int l = 0;
        int r = v.size() - 1;
        string ans = "";
        while(l <= r){
            int mid = l + (r-l)/2;
            if(v[mid].first <= timestamp){
                ans = v[mid].second;
                l = mid +1;
            }
            else r = mid - 1;
        }
        return ans;
    }
private:
    unordered_map<string, vector<pair<int, string>>> ht_;
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
// @lc code=end

