#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
         int n ; 
         cin >> n ;
         vector <int > nums;
         for (int i = 0 ; i < n; i++){
         int k ;
         cin >> k ;
         nums.push_back(k);
         }
          sort(nums.begin(), nums.end());

      long long mid = nums[n / 2];
       long long cost = 0;

         for(int i = 0; i < n; i++) {
        cost += abs(nums[i] - mid);
    }
     long long opn = nums[n - 1] - nums[0];

    cout << cost << " " << opn << "\n";

    }
    return 0 ;
}




























#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        ll sum = 0;
        vector<ll> v;

        for(int i = 0; i < n; i++) {
            if(i >= k-1 && i <= n-k) {
                sum += a[i];
            }
            else {
                v.pb(a[i]);
            }
        }

        int l = 0, r = v.size()-1;

        while(l <= r) {
            sum += max(v[l], v[r]);
            l++;
            r--;
        }

        cout << sum << '\n';
    }

    return 0;
}