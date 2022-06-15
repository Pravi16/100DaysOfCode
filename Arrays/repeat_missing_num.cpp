#include<iostream>
#include<vector>
using namespace std;

vector<long int> compute(vector<int>&nums)
{
    long int n=nums.size();
    long int sum1=n*(n+1)/2,sum2=n*(n+1)*(2*n+1)/6;
    for(long int i=0;i<nums.size();i++)
    {
        sum1=sum1-(long int)(nums[i]);
        sum2=sum2-(long int)(nums[i])*(long int)(nums[i]);
    }
    long int a,b;
    a=(sum1+(sum2/sum1))/2;
    b=a-sum1;
    return {b,a};
}
int main()
{
    vector<int>nums={3,1,2,5,4,6,7,5};
    vector<long int>ans=compute(nums);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}