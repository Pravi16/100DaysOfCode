#include<iostream>
#include<vector>
using namespace std;
int compute(vector<int>&nums,int target)
{
    int l=0,r=nums.size()-1;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(nums[m]==target) return m;
        if(nums[l]<=nums[m])
        {
            if(target >= nums[l] and target <= nums[m]) r=m-1;
            else l=m+1;
        }
        else
        {
            if(target >= nums[m] and target <= nums[r]) l=m+1;
            else r=m-1;
        }
    }
    return -1;
}
int main()
{
    vector<int>nums={4,5,6,7,0,1,2};
    cout<<compute(nums,0)<<endl;
}