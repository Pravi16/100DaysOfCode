#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int compute(vector<int>&nums)
{
    int n=nums.size();
    int lis[n];
    lis[0]=1;
    for(int i=1;i<n;i++)
    {
        lis[i]=1;
        for(int j=0;j<i;j++)
        {
            if(nums[i]>nums[j]) lis[i]=max(lis[i],lis[j]+1);
        }
    }
    return *max_element(lis,lis+n);
}
int main()
{
    vector<int>nums={10,9,2,5,3,7,101,18};
    cout<<compute(nums)<<endl;
}