class Solution {
public:
    string sortString(string s) {
        if(s.empty()) return s;
        
        vector<int> a(26,0);
        for(int i = 0; i < s.size(); i++) a[int(s[i]-'a')]++;
        string res = "";
        int size = s.size();
        while(size--){
            for(int i = 0; i < 26; i++)
                if(a[i] > 0){
                    res = res + char(i+int('a'));
                    a[i]--;
                }
                
            for(int i = 25; i >= 0; i--)
                if(a[i] > 0){
                    res = res + char(i+int('a'));
                    a[i]--;
                }
        }
        
        return res;
    }
};
