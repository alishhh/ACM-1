class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string ans, str;
        for(int i = 0; i < S.size(); i++)
            if(S[i] != '-') str += toupper(S[i]);
        
        for(int i = str.size()-1, l = 1; i >= 0; i--, l++){
            if(l%K == 0){
                if(i == 0) ans += str[i];
                else{
                    ans += str[i];
                    ans += '-';
                }
            }
            else ans += str[i];
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
