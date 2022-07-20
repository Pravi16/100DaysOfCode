class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mini,maxi,ans;
        mini=maxi=ans=nums[0];
        for(int i=1;i<n;i++)
        {
            int curMax=max({nums[i]*maxi,nums[i]*mini,nums[i]});
            mini=min({nums[i]*mini,nums[i]*maxi,nums[i]});
            maxi=curMax;
            ans=max(ans,maxi);
        }
        return ans;
    }
};