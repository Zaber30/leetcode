/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */
#include<bits/stdc++.h>
using namespace std;
 // @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int div = nums.size() / 2;
        int i;
        map<int, int>mp;
        for ( i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        int ans;
        for (auto u : mp) {
            if (u.second > div) {
                ans = u.first;
            }
        }
        return ans;
    }
};
// @lc code=end

