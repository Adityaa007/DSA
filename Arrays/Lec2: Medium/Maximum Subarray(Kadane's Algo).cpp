class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        // if(maxi<0){
        //     maxi=0;
        // }
        return maxi;

    }
};
