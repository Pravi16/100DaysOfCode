class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        compute(board);
    }
    bool isValid(vector<vector<char>>&nums,int r,int c,char num)
    {
        for(int i=0;i<9;i++)
        {
            if(nums[i][c]==num) return false;
            if(nums[r][i]==num) return false;
            if(nums[3*(r/3)+(i/3)][3*(c/3)+(i%3)]==num) return false;
        }
        return true;
    }
    bool compute(vector<vector<char>>&nums)
    {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[0].size();j++)
            {
                if(nums[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(isValid(nums,i,j,c))
                        {
                            nums[i][j]=c;
                            if(compute(nums)==true) return true;
                            else nums[i][j]='.';
                        }
                    }
                    return false;
                }
                
            }
        }
        return true;
    }
};