#include<iostream>
#include<vector>
#include<set>
using namespace std;

int compute(vector<int>&nums)
{
    set<int>st(nums.begin(),nums.end());
    int cnt=0;
    for(int i=0;i<nums.size();i++)
    {
        if(!st.count(nums[i]-1))
        {
            int temp=nums[i];
            int curCNt=1;
            while(st.count(temp+1))
            {
                temp++;
                curCNt++;
            }
            cnt=max(cnt,curCNt);
        }
    }
    return cnt;
}
int main()
{
    vector<int>nums={0,3,7,2,5,8,4,6,0,1};
    cout<<compute(nums)<<endl;
}