#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;

        int aEven = 0, bEven = 0;
        int aOdd = 0, bOdd = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                if (i % 2 == 0) aEven++;
                else aOdd++;
            }

            if (b[i] == '1') {
                if (i % 2 == 0) bEven++;
                else bOdd++;
            }
        }

        if (aEven == bEven && aOdd == bOdd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}