#include<iostream>
#include<vector>
using namespace std;
void compute(vector<vector<int>>&ans)
{
    bool c=false;
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i][0]==0) c=true;
        for(int j=1;j<ans[0].size();j++)
        {
            if(ans[i][j]==0) ans[i][0]=ans[0][j]=0;
        }
    }
    for(int i=ans.size()-1;i>=0;i--)
    {
        for(int j=ans[0].size()-1;j>=1;j--)
        {
            if(ans[i][0]==0 or ans[0][j]==0) ans[i][j]=0;
        }
        if(c==true) ans[i][0]=0;
    }
}
int main()
{
    vector<vector<int>>mat={
        {0,1,2,0},
        {3,4,5,1},
        {1,3,1,2}
    };
    compute(mat);
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[0].size();j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}