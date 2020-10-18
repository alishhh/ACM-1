class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> inter(nums1.begin(), nums1.end());
        
        for(auto x: nums2)
            if(inter.count(x)){
                ans.push_back(x);
                inter.erase(x);
            }
        
        return ans;
    }
};
