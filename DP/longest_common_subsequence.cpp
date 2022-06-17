#include<iostream>
using namespace std;

int compute(string a,string b)
{
    int n1=a.length(),n2=b.length();
    int dp[n1+1][n2+1];
    for(int i=0;i<=n1;i++)
    {
        for(int j=0;j<=n2;j++)
        {
            if(i==0 or j==0) dp[i][j]=0;
            else if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n1][n2];
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<compute(a,b)<<endl;
}