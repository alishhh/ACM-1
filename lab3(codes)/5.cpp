class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> map1;
        map<string, char> map2;
        vector<string> ss;
        
        int pz = 0;
        string word;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' ') word += s[i];
            if(s[i] == ' ' || i == s.size()-1){
                ss.push_back(word);
                word = "";
            }
        }
        
        for(int i = 0; i < ss.size(); i++){
            if(map1.count(pattern[i]) && ss[i] != map1[pattern[i]]) return false;
            else if(!map1.count(pattern[i])) map1[pattern[i]] = ss[i];
            
            if(map2.count(ss[i]) && pattern[i] != map2[ss[i]]) return false;
            else if(!map2.count(ss[i])) map2[ss[i]] = pattern[i];
        }
        
        if(pattern.size() != ss.size()) return false;
        
        return true;
    }
};
