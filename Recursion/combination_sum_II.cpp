#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void compute(int idx,int sum,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
{
    if(sum==0)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=idx;i<nums.size();i++)
    {
        if(i!=idx and nums[i]==nums[i-1]) continue;
        if(nums[i]>sum) break;
        temp.push_back(nums[i]);
        compute(i+1,sum-nums[i],nums,temp,ans);
        temp.pop_back();
    }
}
int main()
{
    vector<int>nums={10,1,2,7,6,1,5};
    sort(nums.begin(),nums.end());      //vector must be sorted in non-decreasing order
    vector<vector<int>>ans;
    vector<int>temp;
    compute(0,8,nums,temp,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}