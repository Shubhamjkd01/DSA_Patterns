#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
// LeetCode 11. Container With Most Water
// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left = 0;
        int right = height.size() - 1;

        int maxi = 0;

        while(left < right)
        {
            int width = right - left;

            int h = min(height[left], height[right]);

            int area = width * h;

            maxi = max(maxi, area);

            // Move smaller height
            if(height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return maxi;
    }
};