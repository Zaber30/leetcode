/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string  s1 = s;
        reverse(s.begin(), s.end());
        if (s == s1) {
            return true;
        }
        else {
            return false;
        }
    }
};
// @lc code=end

