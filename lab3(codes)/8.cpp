class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        vector<int> res;
        vector<pair<int, int>> vec;
        
        for(int x: nums) freq[x]++;
        
        for(auto x: freq) vec.push_back({x.second, x.first});
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());

        for(int i = 0; i < k; i++) res.push_back(vec[i].second);
        return res;
    }
};
