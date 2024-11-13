void reverse(vector<int>&arr,int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();
    k=k%n;
    reverse(arr, 0, k - 1);

    reverse(arr, k, n - 1);

    reverse(arr, 0, n-1);
    return arr;
}
