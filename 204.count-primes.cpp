/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */
#include<bits/stdc++.h>
using namespace std;
 // @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        vector<int>v;
        map<int, int>mp;
        int count = n-1;
        int i, j;
        for (i = 2; i * i <=n; i++) {
            if (mp[i] == 0) {
                for (j = i+i; j <=n; j = j + i) {
                    if (mp[j] == 0) {
                        count--;
                        mp[j] = 1;
                    }
                }
            }
        }
        if (mp[n] == 0) {
            count--;
        }
        return max(0,count);

    }
};
// @lc code=end

