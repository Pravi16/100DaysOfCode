class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]].push_back(i);
        int freq=0;
        for(auto i:mp) 
        {
            freq=max(freq,(int)i.second.size());
        }
        int mini=nums.size();
        for(auto i:mp)
        {
            if(i.second.size()==freq) mini=min(mini,i.second.back()-i.second[0]+1);
        }
        return mini;
    }
};