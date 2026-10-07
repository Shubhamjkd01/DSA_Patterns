#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int cnt = 0;

        while (x.find(s) == string::npos) {
            x += x;
            cnt++;

            if (x.size() > n * m * 2)
                break;
        }

        if (x.find(s) != string::npos)
            cout << cnt << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}