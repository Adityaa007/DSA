#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &A, int n, vector<int> &B, int m)
{
	// Write your code here.
	vector<int>ans;
	int i=0,j=0;
	while(i<n && j<m){
		if(A[i]<B[j]){
			i++;
		}
		else if(B[j]<A[i]){
			j++;
		}
		else{
			ans.push_back(A[i]);
			i++;
			j++;
		}
	}
	
	return ans;
}
