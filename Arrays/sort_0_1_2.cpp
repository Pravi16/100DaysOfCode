#include<iostream>
#include<vector>
using namespace std;

void compute(vector<int>&nums)
{
    int l=0,m=0,r=nums.size()-1;
    while(m<=r)
    {
        if(nums[m]==0) swap(nums[l++],nums[m++]);
        else if(nums[m]==1) m++;
        else swap(nums[m],nums[r--]);
    }
}

int main()
{
    vector<int>nums={2,0,1,1,2,0,1,1,0,1,2,0,1,0};
    compute(nums);
    for(auto i:nums) cout<<i<<" ";
    cout<<endl;
}