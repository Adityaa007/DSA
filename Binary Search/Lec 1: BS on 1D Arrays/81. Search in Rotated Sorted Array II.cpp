class Solution {
public:

    bool searching(vector<int>&arr,int target){
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target) return true;
            if(arr[low]==arr[mid] && arr[mid]==arr[high] ){
                low=low+1;
                high=high-1;
                continue;
            }
            //left half is sorted
            if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            }
            //right half is sorted
            else{
                if(arr[mid]<=target && target<=arr[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }

        }
        return false;
    }

    bool search(vector<int>& nums, int target) {
        return searching(nums,target);
    }
};
