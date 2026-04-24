#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
// leetcode problem 16. 3Sum Closest 
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        long long diff = LLONG_MAX;
        int res_sum = 0;

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int total = nums[i] + nums[left] + nums[right];
                long long d = abs((long long)target - total);

                if (diff > d) {    // update closest sum
                    diff = d;
                    res_sum = total;
                }

                if (total == target) {   
                    return res_sum;
                }

                if (total < target) { 
                    left++;
                } else {
                    right--;
                }
            }
        }

        return res_sum;
    }
};