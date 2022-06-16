#include<iostream>
#include<string>
using namespace std;

string compute(string s)
{
    string ans="";
    int i=0,n=s.length();
    while(i<n)
    {
        if(!isspace(s[i]))
        {
            string temp="";
            while(i<n and !isspace(s[i]))
            {
                temp=temp+s[i++];
            }
            temp=" "+temp;
            ans=temp+ans;
        }
        else i++;
    }
    return ans.substr(1,ans.length()-1);
}
int main()
{
    string s;
    getline(cin,s); 
    cout<<compute(s)<<endl;
}