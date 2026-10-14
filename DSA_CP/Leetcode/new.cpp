
class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
     int n = nums.size();
     int BP = INT_MIN;
    vector<int> ans = {-1, -1};
    for (int i = 0; i < n; i++) {
     for (int j = 0; j < n; j++) {
         if (i != j && nums[i] + nums[j] == target && nums[i] > nums[j]) {
            int pdt = nums[i] * nums[j];
             if (pdt > BP) {
                 BP = pdt;
                 ans = {i, j};
                    }
                }
            }
        }

        return ans;
    }
}



    
