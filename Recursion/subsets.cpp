#include<iostream>
#include<vector>
using namespace std;
void compute(int i,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
{
    if(i==nums.size())
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    compute(i+1,nums,temp,ans);
    temp.pop_back();
    compute(i+1,nums,temp,ans); 

}
int main()
{
    vector<int>nums={1,2,3};
    vector<int>temp;
    vector<vector<int>>ans;
    compute(0,nums,temp,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(auto j:ans[i]) cout<<j<<" ";
        cout<<endl;
    }
}