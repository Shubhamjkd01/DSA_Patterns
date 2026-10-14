#include <iostream>
#include <string>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;

        int zero = 0, one = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '0')
                zero++;
            else
                one++;
        }

        int moves = min(zero, one);
        if (moves % 2 == 1)
            cout << "DA\n";
        else
            cout << "NET\n";
    }

    return 0;
}
