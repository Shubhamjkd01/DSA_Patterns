#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        long long arr[3] = {a, b, c};
        sort(arr, arr + 3);
        
        long long x = arr[0], y = arr[1], z = arr[2];
        
        if (x == y || y == z) {
            cout << 0 << "\n";
        } else {
            cout << min(y - x, z - y) << "\n";
        }
    }
    
    return 0;
}