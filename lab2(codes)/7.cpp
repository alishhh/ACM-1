bool comp(vector<int> &a, vector<int> &b){
    int aa = a[0] * a[0] + a[1] * a[1];
    int bb = b[0] * b[0] + b[1] * b[1];
    return bb > aa;
}

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> ans;
        sort(points.begin(), points.end(), comp);      
        for(int i = 0; i < K; i++) ans.push_back(points[i]);
        return ans;
    }
};
