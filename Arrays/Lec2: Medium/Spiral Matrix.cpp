vector<int> spiralMatrix(vector<vector<int>>&mat) {
    // Write your code here.
    int n=mat.size();
    int m=mat[0].size();
    int top=0,right=m-1;
    int bottom=n-1,left=0;
    vector<int>ans;

    while(top<=bottom && left<=right){
    //right
    for(int i=left;i<=right;i++){
        ans.push_back(mat[top][i]);
    }
    top++;
    //bottom
    for(int i=top;i<=bottom;i++){
        ans.push_back(mat[i][right]);
    }
    right--;
    //left
    if(top<=bottom){
        for (int i = right; i >= left; i--) {
          ans.push_back(mat[bottom][i]);
        }
        bottom--;
    }
    //top
    if(left<=right){
        for (int i = bottom; i >= top; i--) {
          ans.push_back(mat[i][left]);
        }
        left++;
    }
    }
    return ans;
}
