int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    int m=A.size(),n=A[0].size();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++) dp[i][0]=0;
    for(int i=0;i<=n;i++) dp[0][i]=0;
    dp[1][1]=1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(A[i-1][j-1]==0)
            {
                if(i==1 and j==1) continue;
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
            else dp[i][j]=0;
        }
    }
    return dp[m][n];
}
