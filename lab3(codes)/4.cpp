class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> myMap;
        
        string k;
        for(auto x: strs){
            k = x;
            sort(k.begin(), k.end());
            myMap[k].push_back(x);
        }
        
        vector<string> vec;
        for(auto x: myMap){
            k = x.first;
            vec = x.second;
            res.push_back(vec);
        }
        
        return res;
    }
};
