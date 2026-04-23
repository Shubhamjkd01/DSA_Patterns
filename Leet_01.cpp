#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
// LeetCode Problem 1: Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<pair<int,int>> indexed;
        for (int i = 0; i < nums.size(); i++) {
            indexed.push_back({nums[i], i});
        }
        
        sort(indexed.begin(), indexed.end());
        
        int i = 0, j = indexed.size() - 1;
        
        while (i< j) {
            int sum = indexed[i].first + indexed[j].first;
            
            if (sum == target) {
                return {indexed[i].second, indexed[j].second};
            } else if (sum < target) {
                i++;
            } else {
                j--;
            }
        }
        
        return {};
    }
};


// two sum through hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int>mpp ;
        int n = nums.size();
        for (int i = 0; i< n; i++){
            int num = nums[i];
            int moreNeeded = target - num ;
        if (mpp.find(moreNeeded) != mpp.end() ){
            return {mpp[moreNeeded],i};
            }
            mpp[num] = i;
        }
        return { -1,1};
        
    }
};