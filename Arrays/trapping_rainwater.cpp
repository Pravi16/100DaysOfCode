#include<iostream>
#include<vector>
using namespace std;

int compute(vector<int>&nums)
{
    int n=nums.size();
    int l[n],r[n];
    l[0]=nums[0];
    for(int i=1;i<n;i++)
    {
        l[i]=max(l[i-1],nums[i]);
    }
    r[n-1]=nums[n-1];
    for(int i=n-2;i>=0;i--)
    {
        r[i]=max(r[i+1],nums[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans+min(l[i],r[i])-nums[i];
    }
    return ans;
}
int main()
{
    vector<int>nums={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<compute(nums)<<endl;
}