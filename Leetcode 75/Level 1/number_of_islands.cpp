class Solution {
public:
    void compute(vector<vector<char>>& grid,int i,int j)
    {
        int r=grid.size(),c=grid[0].size();
        grid[i][j]='0';
        if(i-1 >=0 and grid[i-1][j]=='1') compute(grid,i-1,j);
        if(i+1 <r and grid[i+1][j]=='1') compute(grid,i+1,j);
        if(j-1 >=0 and grid[i][j-1]=='1') compute(grid,i,j-1);
        if(j+1 <c and grid[i][j+1]=='1') compute(grid,i,j+1);
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    compute(grid,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};