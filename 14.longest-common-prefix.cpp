/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */
#include<bits/stdc++.h>
using namespace std;
 // @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        map<string, int>mp;
        int i, j, k;
        for (i = 0; i < strs.size(); i++) {
            for (j = 0; j < strs[i].size(); j++) {
                string temp = strs[i].substr(0, j + 1);
                mp[temp]++;
            }
        }
        int ans = 0;
        string temp1 = "";
        for (auto u : mp) {
            if (u.second == strs.size()) {
                string var = u.first;
                if (var.size() >= temp1.size()) {
                    temp1.clear();
                    temp1 = var;
                }
            }
        }
        return temp1;

    }
};
// @lc code=end

