#include<vector>
#include<bits/stdc++.h>
using ll = long long;
void swapping(vector<long long> &a, vector<long long> &b ,long long left,long long right){
	if(a[left]>b[right]){
		swap(a[left],b[right]);
	}
}

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	long long n=a.size();
	ll m=b.size();
	ll length=(n+m);
	ll gap=(length/2)+(length%2);
	while(gap>0){
		ll left=0;
		ll right=left+gap;
		while(right<length){
		//a and b both array
		if(left<n && right>=n){
			swapping(a,b,left,right-n);
		}
		//b and b
		else if(left>=n){
			swapping(b,b,left-n,right-n);

                }
                // a and a
                else {
                        swapping(a, a, left, right);
                }
                left++;
                right++;
        }
        if(gap==1){break;}
	gap=gap/2+gap%2;
	}
	
}
