#include<iostream>
#include<vector>
using namespace std;
void compute(int i,int sum,vector<int>&nums)
{
    if(i==nums.size())
    {
        cout<<sum<<" ";
        return;
    }
    compute(i+1,sum+nums[i],nums);  //include nums[i] and increase sum
    compute(i+1,sum,nums);  //dont include nums[i]

}
int main()
{
    vector<int>nums={1,3};
    compute(0,0,nums);
    cout<<endl;
}