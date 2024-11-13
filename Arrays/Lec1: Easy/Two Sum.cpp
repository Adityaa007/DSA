string read(int n, vector<int> book, int target)
{
    // Write your code here
    sort(book.begin(),book.end());
    int l=0;int r=n-1;
    while(l<r){
        int sum=book[l]+book[r];
        if(sum==target){
            return "YES";
        }
        else if(sum<target){
            l++;
        } else {
            r--;
        }
        
    }
