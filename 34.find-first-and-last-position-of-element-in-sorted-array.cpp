/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */
#include<bits/stdc++.h>
using namespace std;
 // @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        auto lower = lower_bound(nums.begin(), nums.end(), target);
        auto upper = upper_bound(nums.begin(), nums.end(), target);
        if (lower == nums.end()||*lower>target) {
            v.push_back(-1);
            v.push_back(-1);
        }
        else {
            int temp = lower - nums.begin();
            int temp1 = upper - nums.begin();
            v.push_back(temp);
            v.push_back(temp1-1);
        }
        return v;
    }
};
// @lc code=end

