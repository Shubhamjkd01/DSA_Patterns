
#include <iostream>
#include <vector>
#include <algorithm>


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == 0) {
            if (b == 0) {
             cout << 0 << endl;
            }
            else if (b == 1) {
            cout << 1 << endl;
            }
            else {
             cout << -1 << endl;
            }
        }
        else if (abs(b) <= a && (a - b) % 2 == 0) {
        cout << a << endl;
        }
        else if (abs(b) <= a + 1 && (a - b) % 2 != 0) {
         cout << a + 1 << endl;
        }
        else {
         cout << -1 << endl;
        }
    }

    return 0;
}
