class NumArray {
public:
    vector<int> a ={0};
    
    NumArray(vector<int>& nums) { a = nums;}
    
    int sumRange(int i, int j) {
        int sum = 0;
        for(int k = i; k <= j; k++) sum += a[k];
        
        return sum;
    }
};