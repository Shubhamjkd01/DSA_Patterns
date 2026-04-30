#include <iostream>
#include <vector>
#include <algorithm>
// #include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<int> b,tw,th,ne;
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            if(x%6==0)      b.push_back(x);
            else if(x%2==0) tw.push_back(x);
            else if(x%3==0) th.push_back(x);
            else            ne.push_back(x);
        }
        for(int x:b)  printf("%d ",x);
        for(int x:tw) printf("%d ",x);
        for(int x:ne) printf("%d ",x);
        for(int x:th) printf("%d ",x);
        printf("\n");
    }
}