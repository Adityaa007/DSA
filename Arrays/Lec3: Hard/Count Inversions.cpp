class Solution {
  public:
  
 int merge(vector<int> &arr, int low, int mid, int high){
      vector<int>temp;
      int left=low;
      int right=mid+1;
      int cnt=0;
      //sorting elements in temp
      while(left<=mid && right<= high){
          if(arr[left]<=arr[right]){
              temp.push_back(arr[left]);
              left++;
          }
          else{
              temp.push_back(arr[right]);
              cnt+=(mid-left+1);
              right++;
          }
      }
      //if elements are left in left
      while(left<=mid){
          temp.push_back(arr[left]);
          left++;
      }
      //if elements are left in right
      while(right<=high){
          temp.push_back(arr[right]);
          right++;
      }
      
      for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return cnt;
      
      
  }
  
int mergeSort(vector<int> &arr, int low, int high) {
    int cnt=0;
    if(low>=high) return cnt;
    int mid=(low+high)/2;
    cnt+= mergeSort(arr,low,mid);
    cnt+= mergeSort(arr,mid+1,high);
    cnt+= merge(arr,low,mid,high);
    return cnt;
}  
  
  
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        
        int n=arr.size();
        // Your Code Here
        return mergeSort(arr,0,n-1);
        
        
        
    }
};
