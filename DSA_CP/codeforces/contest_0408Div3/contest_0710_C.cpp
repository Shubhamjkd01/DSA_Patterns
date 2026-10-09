#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m = n - 4;
        vector<int> v(m);
        for (int i = 0; i < m; i++) {
            v[i] = a[i] + a[i + 2] - a[i + 4];
        }

        map<int, long long> cnt;
        for (int i = 0; i < m; i++) {
            cnt[v[i]]++;
        }

        long long ans = 0;
        for (auto p : cnt) {
            long long c = p.second;
            ans += c * (c - 1) / 2;
        }

        for (int i = 0; i + 2 < m; i++) {
            if (v[i] == v[i + 2]) ans--;
        }

        for (int i = 0; i + 4 < m; i++) {
            if (v[i] == v[i + 4]) ans--;
        }

        cout << ans << "\n";
    }
    return 0;
}