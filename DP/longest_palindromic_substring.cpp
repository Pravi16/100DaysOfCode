#include<iostream>
#include<vector>
using namespace std;

string compute(string s)
{
    int n=s.length();
    int dp[n][n];
    int start=0,maxLength=1;
    for(int i=0;i<n;i++)
    {
        dp[i][i]=1;
        start=i;
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            dp[i][i+1]=1;
            start=i;
            maxLength=2;
        }
    }
    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n-k+1;i++)
        {
            int j=i+k-1;
            if(s[i]==s[j] and dp[i+1][j-1])
            {
                dp[i][j]=1;
                if(k>maxLength)
                {
                    start=i;
                    maxLength=k;
                }
            }
        }
    }
    return s.substr(start,maxLength);
}
int main()
{
    string s="aaaabbaa";
    cout<<compute(s)<<endl;
}