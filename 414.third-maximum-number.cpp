/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */
#include<bits/stdc++.h>
using namespace std;
 // @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int i,cnt=0,temp;
        sort(nums.begin(), nums.end());
        int size = unique(nums.begin(), nums.end()) - nums.begin();
        for (i = size - 1; i >= 0; i--) {
            cnt++;
            if (cnt > 3) {
                break;
            }
            else {
                temp = nums[i];
            }
        }
        if (cnt == 2) {
            temp = nums[size - 1];
        }
        return temp;
    }
};
// @lc code=end

