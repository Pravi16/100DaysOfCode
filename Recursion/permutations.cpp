#include<iostream>
#include<vector>
using namespace std;

void compute(int idx,vector<int>&nums,vector<vector<int>>&ans)
{
    if(idx==nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for(int i=idx;i<nums.size();i++)
    {
        swap(nums[i],nums[idx]);
        compute(idx+1,nums,ans);
        swap(nums[i],nums[idx]);
    }
}

int main()
{
    vector<int>nums={1,2,3};
    vector<vector<int>>ans;
    compute(0,nums,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(auto j:ans[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}