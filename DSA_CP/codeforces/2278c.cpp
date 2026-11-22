#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long total = 0;
        bool AB = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
            if (a[i] >= 2)
             AB = true;
        }
        if (!AB) {
            cout << -1 << "\n";
            continue;
        }
        if (n == 2) {
            cout << total - 1 << "\n";
            continue;
        }
        bool mb= false;
        for (int i = 1; i < n - 1; i++) {
            if (a[i] >= 2)
             mb = true;
        }
        if (mb)
         cout << total - 1 << "\n";
        else
         cout << total - (n - 1) << "\n";
    }
    return 0;
}