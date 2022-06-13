#include<iostream>
#include<vector>
using namespace std;

bool compute(vector<vector<int>>&nums,int target)
{
    int i=0,j=nums[0].size()-1;
    while(i>=0 and i<nums.size() and j>=0 and j<nums[0].size())
    {
        if(nums[i][j]==target) return true;
        else if(target>nums[i][j]) i++;
        else j--;
    }
    return false;

}
int main()
{
    vector<vector<int>>nums={
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    cout<<compute(nums,30);
    cout<<endl;
}