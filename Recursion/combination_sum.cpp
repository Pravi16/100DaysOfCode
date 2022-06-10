#include<iostream>
#include<vector>
using namespace std;

void compute(int i,int sum,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
{
    if(i==nums.size())
    {
        if(sum==0) ans.push_back(temp);
        return;
    }
    if(nums[i]<=sum)    //include nums[i] and reduce sum
    {
        temp.push_back(nums[i]);
        sum=sum-nums[i];
        compute(i,sum,nums,temp,ans);
        temp.pop_back();
        sum=sum+nums[i];    //since we included nums[i]
    }
    compute(i+1,sum,nums,temp,ans);     //ignore nums[i]
}
int main()
{
    vector<int>nums={2,3,6,7};
    vector<vector<int>>ans;
    vector<int>temp;
    compute(0,7,nums,temp,ans);
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