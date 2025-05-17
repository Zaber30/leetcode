/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */
#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        long long i;
        long long temp = 0;
        for (i = 0;; i++) {
            if (i * i <= x) {
                temp = i;
            }
            else{
                break;
            }
        }
        return temp;
    }
};
// @lc code=end

