class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int n=arr.size();
        int maxi=INT_MIN;
        for(int i=1;i<n;i++){
            maxi=max(maxi,arr[i-1]+arr[i]);
        }
        return maxi;
    }
};
