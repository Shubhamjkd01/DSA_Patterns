#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
// LeetCode Problem 209: Minimum Size Subarray Sum
// Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. If there is no such subarray, return 0 instead.

class Solution {
public:

      int minSubArrayLen(int tar, vector<int>& a) {
        int n = a.size();
        int left = 0;
        int sum = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < n; ++right) {
            sum += a[right];

            
            while (sum >= tar) {
                minLen = min(minLen, right - left + 1);
                sum -= a[left];
                ++left;
            }
        }

        return (minLen == INT_MAX) ? 0 : minLen;
    }
  
    
};