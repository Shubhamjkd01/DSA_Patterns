#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int k2= x / 5;

    if (x % 5 != 0)
    {
        k2++;
    }

    cout << k2;

    return 0;
}