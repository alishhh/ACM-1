class Solution {
public:
    double average(vector<int>& salary) {
        int mx = -1e3, mn = 1e6;
        
        for(int i = 0; i < salary.size(); i++){
            if(salary[i] < mn) mn = salary[i];
            if(salary[i] > mx) mx = salary[i];
        }
        
        int cnt = 0;
        double ans = 0;
        for(int i = 0; i < salary.size(); i++){
            if(salary[i] == mn || salary[i] == mx)
                continue;
            else{
                ans += salary[i];
                cnt++;
            }
        }
        
        return double(ans/cnt);
    }
};
