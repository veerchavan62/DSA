class NumArray {
public:
   vector<int>& p;
public:
    NumArray(vector<int>& nums):p(nums) {
        for (int i =1;i<p.size(); i++) p[i]+=p[i - 1];
    }
    int sumRange(int l, int r) {
        return p[r]-(l?p[l - 1]:0);
    }
};