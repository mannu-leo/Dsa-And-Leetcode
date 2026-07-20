class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int i) {
        int m=grid.size();
        int n=grid[0].size();
        int temp;
        vector<vector<int>>ans(m,vector<int>(n));
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                int index=j*n+k;
                int place=(index+i)%(m*n);
                int row=place/n;
                int col=place%n;
                ans[row][col]=grid[j][k];                  
            }
        }
        return ans;
    }
};