class Solution{
    public:
    void compute(int i,int j,vector<vector<int>>&nums,int n,string cur,vector<vector<int>>&vis,vector<string>&ans)
    {
        if(i==n-1 and j==n-1)
        {
            ans.push_back(cur);
            return;
        }
        if(i+1<n and !vis[i+1][j] and nums[i+1][j]==1)
        {
            vis[i][j]=1;
            compute(i+1,j,nums,n,cur+'D',vis,ans);
            vis[i][j]=0;
        }
        if(j+1<n and !vis[i][j+1] and nums[i][j+1]==1)
        {
            vis[i][j]=1;
            compute(i,j+1,nums,n,cur+'R',vis,ans);
            vis[i][j]=0;
        }
        if(i-1>=0 and !vis[i-1][j] and nums[i-1][j]==1)
        {
            vis[i][j]=1;
            compute(i-1,j,nums,n,cur+'U',vis,ans);
            vis[i][j]=0;
        }
        if(j-1>=0 and !vis[i][j-1] and nums[i][j-1]==1)
        {
            vis[i][j]=1;
            compute(i,j-1,nums,n,cur+'L',vis,ans);
            vis[i][j]=0;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n));
        if(m[0][0]==1) compute(0,0,m,n,"",vis,ans);
        return ans;
    }
};
