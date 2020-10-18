class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> myMap;
        for(int i = 0; i < nums.size(); i++){
            if(myMap.count(nums[i])){
                int dif = i - myMap[nums[i]];
                if(dif <= k)
                    return true;
            }
            myMap[nums[i]] = i;
        }
        
        return false;
    }
};
