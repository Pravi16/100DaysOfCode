class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++)
        {
            if(i==0 or nums[i]!=nums[i-1])
            {
                int j=i+1,k=n-1;
                while(j<k)
                {
                    int sum=nums[i]+nums[j]+nums[k];
                    if(sum==0)
                    {
                        ans.push_back({nums[i],nums[j],nums[k]});
                        j++;
                        while(j<k and nums[j]==nums[j-1]) j++;
                    }
                    if(sum<0) j++;
                    else k--;
                }
            }
        }
        return ans;
    }
};