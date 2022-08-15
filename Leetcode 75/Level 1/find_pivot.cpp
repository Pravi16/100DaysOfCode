class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum=accumulate(nums.begin(),nums.end(),0);
        int curSum=0;
        for(int i=0;i<nums.size();i++)
        {
            totalSum=totalSum-nums[i];
            if(totalSum==curSum) return i;
            curSum+=nums[i];
        }
        return -1;
    }
};