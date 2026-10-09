 #include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

    int n, k; cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
     cin >> a[i];    
    sort(a.begin(), a.end());
    int cnt = 1, ans = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] - a[i - 1] > k) {
            cnt = 1;
        } else {
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << n - ans << '\n';
}  
return 0;
} 