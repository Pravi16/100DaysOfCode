class Solution {
public:
    void dfs(vector<vector<int>>&nums,int rr,int cc,int n,int src,int r,int c)
    {
        if(rr<0 or rr>=r or cc<0 or cc>=c) return;
        if(nums[rr][cc]!=src) return;
        nums[rr][cc]=n;
        dfs(nums,rr-1,cc,n,src,r,c);
        dfs(nums,rr+1,cc,n,src,r,c);
        dfs(nums,rr,cc-1,n,src,r,c);
        dfs(nums,rr,cc+1,n,src,r,c);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& nums, int rr, int cc, int n) {
        if(n==nums[rr][cc]) return nums;
        int r=nums.size();
        int c=nums[0].size();
        int src=nums[rr][cc];
        dfs(nums,rr,cc,n,src,r,c);
        return nums;
    }
};