#include <bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n=a.size();
    int xr=0;
    int cnt=0;
    map<int,int>mpp;
    mpp[xr]++;
    
    
    for(int i=0;i<n;i++){
        xr=xr^a[i];
        int x=xr^b;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
