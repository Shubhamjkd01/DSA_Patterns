#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b;
        cin >> a >> b;
        
        if (a == b){
            cout << "0 0\n";
        }
        else
        {
            long long d = abs(a - b);
            long long  step = min(a % d, d - a % d);
            cout << d << " " << step << '\n';
        }
    }

    return 0;
}
