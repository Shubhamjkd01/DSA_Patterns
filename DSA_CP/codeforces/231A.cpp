#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int keshav = 0;
    for (int i = 0; i < n; i++)
    {
        int k1,k2,k3;
        cin >> k1>> k2 >> k3;

        if (k1+k2+k3 >= 2)
        {
            keshav++;
        }
    }

    cout << keshav;

    return 0;
}