#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int k;
        scanf("%d", &k);
        vector<long long> c(k);
        long long maxc = 0;
        int cnt2 = 0;
        for (int i = 0; i < k; i++) {
            scanf("%lld", &c[i]);
            maxc = max(maxc, c[i]);
            if (c[i] == 2) cnt2++;
        }
        bool ok = (maxc >= 3) || (cnt2 >= 2);
        printf(ok ? "YES\n" : "NO\n");
    }
    return 0;
}