class Solution {
public:
    vector<string>ans;
    void compute(int l,int r,string s)
    {
        if(l==0 and r==0)
        {
            ans.push_back(s);
            return;
        }
        if(r>l) compute(l,r-1,s+')');
        if(l>0) compute(l-1,r,s+'(');
    }
    vector<string> generateParenthesis(int n) {
        compute(n,n,"");
        return ans;
        
    }
};