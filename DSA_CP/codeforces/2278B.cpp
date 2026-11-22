#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, p, s;
        cin >> r >> p >> s;

        int n = r + p + s;
        int nd = (n + 1) / 2;

        string ans = "";

        if (r >= nd) {
            ans = string(n, 'P');
        }
        else if (p >= nd) {
            ans = string(n, 'S');
        }
        else if (s >= nd) {
            ans = string(n, 'R');
        }
        else {
         int x = min(r, s);
        int y = min(p, r);
         int z = min(s, p);
        for (int i = 0; i < x; i++)
            ans += 'P';
         for (int i = 0; i < y; i++)
            ans += 'S';
        for (int i = 0; i < z; i++)
             ans += 'R';
         while (ans.size() < n)
                ans += 'R';
        }

        cout << ans << '\n';
    }

    return 0;
}