#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int compute(vector<int>& nums) {
    int l=0,r=nums.size()-1;
    int maxArea=INT_MIN;
    while(l<r)
    {
        int area=min(nums[l],nums[r])*(r-l);
        maxArea=max(maxArea,area);
        if(nums[l]<nums[r]) l++;
        else r--;
    }
    return maxArea;
}
int main()
{
    vector<int>nums={1,8,6,2,5,4,8,3,7};
    cout<<compute(nums)<<endl;
}