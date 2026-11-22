
#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        string p, q;
        cin >> p>> q;
        int cnt[26] = {0};
        for (int i = 0; i < n; i++){
            cnt[p[i] - 'a']++;
        }

        for (int i = 0; i < m; i++){
            cnt[q[i] - 'a']--;
        }

        string target = "six";
        bool flag = true;
        for (int i = 0; i < 26; i++){
            int exptd = 0;

            for (int j = 0; j < 3; j++){
                if (i == target[j] - 'a')
                {
                    exptd++;
                }
            }
            if (cnt[i] != exptd)
            {
                flag = false;
                break;
            }
        }
        if (flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}

