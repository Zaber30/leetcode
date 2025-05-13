/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */
#include<bits/stdc++.h>
#include<string>
using namespace std;
 // @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i, temp = 1;
        vector<int>v;
        for (i = digits.size() - 1; i >= 0; i--) {
            int sum = temp + digits[i];
            v.push_back(sum % 10);
            temp = sum / 10;
        }
        if (temp >= 1) {
            v.push_back(temp);
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
// @lc code=end

