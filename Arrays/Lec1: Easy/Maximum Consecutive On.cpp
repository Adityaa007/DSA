int consecutiveOnes(vector<int>& arr){
    //Write your code here.
    int n=arr.size();
    int count=0;
    int max_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        } else {
            count = 0;
        }
                max_count=max(max_count,count);

    }
        return max_count;
    
}
