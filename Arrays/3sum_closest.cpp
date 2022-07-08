class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0,mini=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            int l=i+1,r=n-1;
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                int diff=abs(sum-target);
                if(mini > diff)
                {
                    mini=diff;
                    ans=sum;
                }
                else if(sum > target) r--;
                else l++;
            }
        }
        return ans;
        
    }
};