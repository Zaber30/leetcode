/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */
#include<bits/stdc++.h>
using namespace std;
 // @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int i;
        string s1 = "";
        temp = (s.size() + 2 - 1) / 2;
        for (i = 0; i < temp; i++) {
            if (isalpha(s[i])||isdigit(s[i])) {
                s1 = s1 + char(tolower(s[i]));
            }
        }
        //  transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
        string s2 = s1;

        reverse(s1.begin(), s1.end());
        if (s1 == s2) {
            return true;
        }
        else {
            return false;
        }
    }
};
// @lc code=end

