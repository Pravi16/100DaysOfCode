#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<vector<int>>&ans)
{
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
void compute(vector<vector<int>>&nums)
{
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(nums[i][j],nums[j][i]);
        }
    }
    for(int i=0;i<nums.size();i++)
    {
        reverse(nums[i].begin(),nums[i].end());
    }
}
int main()
{
    vector<vector<int>>nums={
        {5,1,9,11},
        {2,4,8,10},
        {13,3,6,7},
        {15,14,12,16}
    };
    compute(nums);
    print(nums);
    cout<<endl;
}