#include<iostream>
#include<vector>
using namespace std;

int compute(vector<int>&nums)
{
    int maxSum=nums[0],curSum=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        curSum=max(nums[i],curSum+nums[i]);
        maxSum=max(maxSum,curSum);
    }
    return maxSum;
}
int main()
{
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<compute(nums)<<endl;
}