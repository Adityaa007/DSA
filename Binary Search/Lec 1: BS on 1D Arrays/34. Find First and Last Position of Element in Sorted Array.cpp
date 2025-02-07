class Solution {
public:
    int lowerbound(vector<int>&arr,int target,int n){
        int low=0;
       int  high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int upperbound(vector<int>&arr,int target,int n){
       int low=0;
       int high=n-1;
       int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }

    // pair<int,int>indexs(vector<int>&arr,int target,int n){
       
    // }

    vector<int> searchRange(vector<int>& arr, int target) {
        int n=arr.size();
         int lb=lowerbound(arr,target,n);
        if(lb==n || arr[lb]!=target){
            return {-1,-1};
        }
        int ub=upperbound(arr,target,n);
        return {lb,ub-1};
    }
};
