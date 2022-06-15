#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> compute(vector<vector<int>>&nums)
{
    vector<vector<int>>ans;
    sort(ans.begin(),ans.end());
    vector<int>temp=nums[0];
    for(auto i:nums)
    {
        if(i[0]<=temp[1]) temp[1]=max(temp[1],i[1]);
        else
        {
            ans.push_back(temp);
            temp=i;
        }
    }
    ans.push_back(temp);
    return ans;
}
int main()
{
    vector<vector<int>>nums={
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    };
    vector<vector<int>>ans=compute(nums);
    for(int i=0;i<ans.size();i++)
    {
        for(auto j:ans[i]) cout<<j<<" ";
        cout<<endl;
    }
    cout<<endl;
}