class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], mx = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(sum+nums[i] < nums[i]) sum = nums[i];
            else sum = sum+nums[i];
            
            if(mx < sum) mx = sum;
            else mx = mx;
        }
        
        return mx;
    }
};
