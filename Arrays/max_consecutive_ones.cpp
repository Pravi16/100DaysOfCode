#include<iostream>
#include<vector>
using namespace std;

int compute(vector<int>&nums)
{
    int cnt=0,maxCnt=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==1) cnt++;
        else cnt=0;
        maxCnt=max(maxCnt,cnt);
    }
    return maxCnt;
}
int main()
{
    vector<int>nums={1,1,0,1,1,1};
    cout<<compute(nums)<<endl;
}