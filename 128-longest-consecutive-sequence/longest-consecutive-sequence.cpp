class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
   if(nums.empty()) return 0;
        set<int> s(nums.begin(), nums.end());
        int ans=1, count=1;
        auto it=s.begin();
        int prev=*it++;

        while(it!= s.end()) {
            if(*it == prev +1)
                count++;
            else
                count=1;

            ans=max(ans, count);
            prev=*it;
            it++;
        }

        return ans;
    }
};