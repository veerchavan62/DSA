# Find First And Last Position Of Element In Sorted Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.5 MB  
**Submitted:** 2026-09-08T19:22:02.800Z  

```cpp
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int startingPosition=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int endingPosition =lower_bound(nums.begin(), nums.end(),target+1)-nums.begin()-1;
        if(startingPosition<nums.size() && nums[startingPosition]==target){
            return {startingPosition,endingPosition};
        }
        return {-1,-1};
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)