class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p1=nums[0],p2=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int temp=max({nums[i],p1*nums[i],p2*nums[i]});
            p2=min({nums[i],p1*nums[i],p2*nums[i]});
            p1=temp;
            ans=max(ans,p1);
        }
        return ans;
        
    }
};