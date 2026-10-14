
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string n;
        cin >> n;

        int ans = INT_MAX;

        for (int i = 0; i < n.size(); i++){

            for (int j = i + 1; j < n.size(); j++){
                            
     if ((n[i] == '2' && n[j] == '5') || (n[i] == '5' && n[j] == '0') || (n[i] == '7' && n[j] == '5') || (n[i] == '0' && n[j] == '0'))
      {
        int dele = (j - i - 1) + (n.size() - 1 - j);
         ans = min(ans, dele);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
