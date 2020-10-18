class Solution {
public:
    string largestNumber(vector<int>& nums) {
        if(nums.size() == 0) return "";
        
        string ab, ba;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                string a = to_string(nums[i]), b = to_string(nums[j]);
                ab = a + b;
    		ba = b + a;
                if(ab < ba) swap(nums[i], nums[j]);
            }
        }
        
        string ans;
        for(int i = 0; i < nums.size(); i++) ans += to_string(nums[i]);
        if(ans[0] == '0') return "0";
        
        return ans;
    }
};
