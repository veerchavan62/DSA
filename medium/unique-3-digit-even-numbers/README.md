# Unique 3 Digit Even Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** unknown  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-11T11:14:54.005Z  

```unknown
1class Solution {
2public:
3    bool canEatAll(vector<int>&piles,int mid,int h){
4        int actualhours=0;
5        for(int &x:piles){
6            actualhours+=x/mid;
7            if(x%mid!=0){
8                actualhours++;
9            }
10        }
11        return actualhours<=h;
12    }
13    int minEatingSpeed(vector<int>& piles, int h) {
14        int n=piles.size();
15        int l=1;
16        int r=*max_element(begin(piles),end(piles));
17        while(l<r){
18            int mid=l+(r-l)/2;
19            if(canEatAll(piles,mid,h)){
20                r=mid;
21            } else {
22                l=mid+1;
23            }
24            }
25            return l;
26        }
27};
```

---

[View on LeetCode](https://leetcode.com/problems/unique-3-digit-even-numbers/)