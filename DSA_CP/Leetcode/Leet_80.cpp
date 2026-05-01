#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
//Leetcode problem 80. Remove Duplicates from Sorted Array II
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size(); // edge case
        
        int k = 2;
        
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[k - 2]) { // not a 3rd duplicate?
                nums[k] = nums[i];        
                k++;
            }
        }
        
        return k;
    }
};
//revise 2 times 