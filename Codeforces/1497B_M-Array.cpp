#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> rm(m, 0);
       
        for(int i=0; i<n; i++){
            int v;
            cin >> v;
            int rem = v % m;
            rm[rem]++;
        }

        int groups =0;
        if (rm[0]>0){
            groups++;
        }

        for (int r = 1; r <= m/2; r++){    //keep in mind that we are counting pairs of remainders, so we only need to go up to m/2
            if (m-r == r){
                if (rm[r]>0){       //ye important hai, kyunki agar rm[r] = 0 hoga toh hume groups count nahi karna hai, warna hum ek extra group count kar denge
                    groups++;

                }

            }
            else {
                int c1 = rm[r];     //ye important hai, kyunki agar rm[r] = 0 hoga toh hume groups count nahi karna hai, warna hum ek extra group count kar denge
                int c2 = rm[m-r];  //ye important hai, kyunki agar rm[m-r] = 0 hoga toh hume groups count nahi karna hai, warna hum ek extra group count kar denge

                if (c1 == 0 && c2 == 0) continue;    //

                groups ++;
                int diff = abs(c1-c2);  //ye important hai, kyunki agar c1 aur c2 equal honge toh hume groups count nahi karna hai, warna hum ek extra group count kar denge
                if (diff > 0){
                    groups += diff-1;   //think of it this way, agar c1 aur c2 equal honge toh hume groups count nahi karna hai, warna hum ek extra group count kar denge, isliye hum diff-1 kar rahe hain

                }

                

                



            }

        }

        cout << groups <<"\n";
       
    }

    return 0;
}
