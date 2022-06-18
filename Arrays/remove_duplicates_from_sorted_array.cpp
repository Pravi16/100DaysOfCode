#include<iostream>
#include<vector>
using namespace std;

int compute(vector<int>&nums)
{
    if(nums.size()==0) return 0;
    int i=0;
    for(int j=1;j<nums.size();j++)
    {
        if(nums[i]!=nums[j])
        {
            nums[++i]=nums[j];
        }
    }
    return i+1;
}
int main()
{
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};
    cout<<compute(nums)<<endl;
}