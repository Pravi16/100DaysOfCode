#include<iostream>
#include<vector>
using namespace std;

void compute(int idx,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
{
    ans.push_back(temp);
    for(int i=idx;i<nums.size();i++)
    {
        if(i!=idx and nums[i]==nums[i-1]) continue;
        temp.push_back(nums[i]);
        compute(i+1,nums,temp,ans);
        temp.pop_back();
    }
}
int main()
{
    vector<int>nums={1,2,2};      //vector should be sorted in non-decreasing order
    vector<int>temp;
    vector<vector<int>>ans;
    compute(0,nums,temp,ans);
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