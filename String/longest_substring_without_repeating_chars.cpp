class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int i=0,j=0,maxi=0;
        int n=s.length();
        while(i<n and j<n)
        {
            int len=0;
            if(st.find(s[i])==st.end())
            {
                st.insert(s[i++]);
                len=st.size();
            }
            else st.erase(s[j++]);
            maxi=max(maxi,len);
        }
        return maxi;
    }
};