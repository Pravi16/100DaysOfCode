class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto i:nums) sum+=i;
        if(sum & 1) return false;
        int dp[n+1][sum/2+1];
        for(int i=0;i<=nums.size();i++)
        {
            for(int j=0;j<=sum/2;j++)
            {
                if(i==0 or j==0) dp[i][j]=false;
                else if(nums[i-1] > j) dp[i][j]=dp[i-1][j];
                else if(nums[i-1] == j) dp[i][j]=true;
                else dp[i][j]=dp[i-1][j] or dp[i-1][j-nums[i-1]];
            }
        }
        return dp[n][sum/2];
        
    }
};