/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */
#include<bits/stdc++.h>
using namespace std;
 // @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0, i = 0;
        for (i = 0; i < nums.size(); i++) {
            result = result ^ nums[i];
        }
        return result;
    }
};
// @lc code=end

