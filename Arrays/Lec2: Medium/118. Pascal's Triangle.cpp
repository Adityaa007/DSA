class Solution {
public:
    vector<int>generaterow(int row){
        vector<int>ansrow;
        long long res=1;
        ansrow.push_back(res);
        for(int col=1;col<row;col++){
            res=res*(row-col);
            res=res/col;
            ansrow.push_back(res);
        }
        return ansrow;

    }

    vector<vector<int>> generate(int rows) {
        vector<vector<int>>ans;
        for(int i=1;i<=rows;i++){
            ans.push_back(generaterow(i));
        }
        return ans;
    }
};
