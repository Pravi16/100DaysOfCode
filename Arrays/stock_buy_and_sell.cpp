#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int compute(vector<int>&nums)
{
    int minPrice=INT_MAX;
    int profit=0;
    for(int i=0;i<nums.size();i++)
    {
        minPrice=min(minPrice,nums[i]);
        profit=max(profit,nums[i]-minPrice);
    }
    return profit;
}
int main()
{
    vector<int>nums={7,1,5,3,6,4};
    cout<<compute(nums)<<endl;
}