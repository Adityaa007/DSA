#include<vector>
#include <bits/stdc++.h>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int n=arr.size();
	for(int i=1;i<n;i+=2){
		if(arr[i]!=arr[i-1])
			return arr[i-1];
	}
	return arr[n-1];
}
