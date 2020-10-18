class Solution {
public:
    string reverseWords(string s) {
    string ans;
    s = ' ' + s + ' ';
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' ' && s[i+1] == ' '){
            string temp;
            int id = i;
            while (true){
                temp = temp + s[id];
                if (s[id-1] == ' ') break;
                id--;
            }
            if (ans.size() == 0) ans = ans + temp;
            else ans = ans + ' ' + temp;
        }
    }
        
    return ans;
    }
};
