class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> num;
        for(int i = 0; i < nums.size(); i++){
            if(num.count(nums[i]) == true) return true;
            num.insert(nums[i]);
        }
    
        return false;
    }
};
