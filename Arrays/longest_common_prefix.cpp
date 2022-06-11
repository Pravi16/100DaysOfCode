#include<iostream>
#include<vector>
using namespace std;

string compute(vector<string>&nums)
{
    string temp=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        int l=min(temp.length(),nums[i].length());
        while(temp.substr(0,l)!=nums[i].substr(0,l)) l--;
        if(l<0) return "";
        temp=temp.substr(0,l);
    }
    return temp;
}
int main()
{
    vector<string>nums={"flower","flow","flo"};
    cout<<compute(nums)<<endl;
}