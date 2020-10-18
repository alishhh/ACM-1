class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0, ans = -1e9;
        for(int i = 0; i < nums.size(); i++) {
            if(i == k-1) avg += nums[i];
            else{
                ans = max(avg, ans);
                avg += nums[i]-nums[i-k];
            }
        }
        ans = max(avg, ans);

        return ans/k;
    }
};
