/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */
#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int var=1,i=0;
        if (x < 0) {
            var = -1 * 1;
        }
        long long temp,sum=0;
        x = abs(x);
        while (x > 0) {
            
            sum = sum * 10 + (x % 10);
            x = x / 10;
        }
        return (var * sum);
    }
};
// @lc code=end

