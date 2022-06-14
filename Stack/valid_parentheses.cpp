#include<iostream>
#include<stack>
using namespace std;
bool compute(string s)
{
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' or s[i]=='[' or s[i]=='{') st.push(s[i]);
        else
        {
            if(st.empty()) return false;
            else if((st.top()=='(' and s[i]==')') or (st.top()=='[' and s[i]==']') or (st.top()=='{' and s[i]=='}')) st.pop();
            else return false;
        }
    }
    if(st.size() > 0) return false;
    return true;
}
int main()
{
    string check="()[]{}";
    cout<<compute(check)<<endl;
}
