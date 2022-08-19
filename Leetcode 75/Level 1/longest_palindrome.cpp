class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        int cnt=0;
        for(int i=0;i<s.length();i++) 
        {
            mp[s[i]]++;
            if(mp[s[i]]%2==0)
            {
                cnt=cnt+mp[s[i]];
                mp[s[i]]=0;
            }
        }
        for(auto i:mp)
        {
            if(i.second==1) 
            {
                cnt++;
                break;
            }
        }
        return cnt;
    }
};