#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            nums.push_back(x);
        }
        long long sum = 0;
        vector<int> s;
        for(int i = 0; i < n; i++) {
            if(i >= k-1 && i <= n-k) {
                sum += nums[i];
            }
            else {
                s.push_back(nums[i]);
            }
        }
        int x= s.size() ;
        int left = 0, right = x -1 ;

        while(left < right && x>k-1) {
            sum += max(s[left], s[right]);
            left++;
            right--;
           x--;
        }

        cout << sum << '\n';
    }

    return 0;
}