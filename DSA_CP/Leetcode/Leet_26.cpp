#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
// LeetCode Problem 26: Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};