class Solution {
public:
    string compute(string s)
    {
        s=s+" ";
        string res="";
        int cnt=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==s[i+1]) cnt++;
            else {
                res=res+to_string(cnt)+s[i];
                cnt=1;
            }
        }
        res.pop_back();
        res.pop_back();
        return res;
    }
    string countAndSay(int n) {
        if(n==0) return "";
        vector<string>ans(n);
        ans[0]="1";
        for(int i=1;i<n;i++)
        {
            ans[i]=compute(ans[i-1]);
        }
        return ans[n-1];
        
    }
};