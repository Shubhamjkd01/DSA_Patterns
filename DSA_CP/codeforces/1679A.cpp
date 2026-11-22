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
    long long n;
     cin >> n;
    if (n < 4 || n % 2 != 0) {
        cout << -1 << "\n";
        continue;
      
    }
    long long mini = n / 6;
    long long maxi = n / 4;

    if(n%6 == 4|| n%6== 2 ){
        mini++;
    }



    cout << mini << " " << maxi << "\n";




    }
    return 0 ;
}