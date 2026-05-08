#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
// 977. Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;

        int index = n - 1;

        while(left <= right) {

            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if(leftSquare > rightSquare) {
                ans[index] = leftSquare;
                left++;
            }
            else {
                ans[index] = rightSquare;
                right--;
            }

            index--;
        }

        return ans;
    }
};