#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;

        if (n % 4 == 0)
        {
            cout <<x<<endl;
            
        }
        else if (n % 4 == 1)
        {
            if (x % 2 == 0)
                cout << x - n<< endl;
            else
                cout << x + n << endl;
        }
        else if (n % 4 == 2)
        {
            if (x % 2 == 0)
                cout << x + 1 << endl;
            else
                cout << x - 1 << endl;
        }
        else
        {
            if (x % 2 == 0)
                cout << x + n + 1 << endl;
            else
                cout << x - n - 1 << endl;
        }
    }

    return 0;
}