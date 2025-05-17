/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */
#include<bits/stdc++.h>
using namespace std;
 // @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i, count = 0;
        i = s.size() - 1;
        while (isspace(s[i])) {
            i--;
        }
        for (int k = i; k >= 0; k--) {
            if (isspace(s[k])) {
                break;
            }
            else {
                count++;
            }
        }
        return count;
    }
};
// @lc code=end

