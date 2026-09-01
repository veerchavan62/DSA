# Binary Search

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 31.5 MB (beats 7.26%)  
**Submitted:** 2026-09-01T18:44:32.872Z  

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
       
        int low=0;
        int high=nums.size()-1;
        while(low<=high){  
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            } else if(nums[mid]<target){
                low=mid+1;
            } else {
                high=mid-1;
            }
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/binary-search/)