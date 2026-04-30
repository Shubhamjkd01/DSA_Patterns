#include <iostream>
#include <vector>
#include <algorithm>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        
        int open=0, close=0;
        for(char c:s){
            if(c=='(') open++;
            else close++;
        }
        
        if(n%2==0 && open==close) cout<<"YES\n";
        else cout<<"NO\n";
    }
}