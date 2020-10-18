class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> num1, num2;
        for(auto x: nums1) num1.emplace(x);
        for(auto x: nums2) num2.emplace(x);
        
        vector<int> inters;
        set<int>::iterator it1, it2;
        for(it1 = num1.begin(); it1 != num1.end(); it1++){
            for(it2 = num2.begin(); it2 != num2.end(); it2++){
                if(*it1 == *it2)
                    inters.push_back(*it1);
            }
        }
        
        return inters;
    }
};
