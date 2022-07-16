class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(),maxi=0;
        if(n<=1) return true;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,i+nums[i]);
            if(maxi==i) return false;
            if(maxi>=n-1) return true;
        }
        return false;
        
    }
};