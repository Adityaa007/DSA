class Solution {
public:
    int minimum(vector<int> &arr, int n){
        int low=0;
        int high=n-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[mid]){     //left half sorted
                ans=min(ans,arr[low]);
                low=mid+1;
            }
            else{                       //right half sorted
                ans=min(ans,arr[mid]);
                high=mid-1;
            }
        }
        return ans;
    }

    int findMin(vector<int>& nums) {
        int n=nums.size();
        return minimum(nums,n);
    }
};
