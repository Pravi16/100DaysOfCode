#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> compute(vector<int>&nums,int target)
{
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++)
    {
        if(mp.find(target-nums[i])!=mp.end()) return {i,mp[target-nums[i]]};
        mp[nums[i]]=i;
    }
    return {};
}
int main()
{
    vector<int>nums={2,7,11,15};
    vector<int>ans=compute(nums,9);
    cout<<ans[0]<<" "<<ans[1];
    cout<<endl;
}