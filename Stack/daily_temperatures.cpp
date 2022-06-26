class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& A) {
        int n=A.size();
        vector<int>ans(n,0);
        stack<int>a;
        for(int i=n-1;i>=0;i--)
        {
            while(!a.empty() and A[a.top()]<=A[i])
            {

                a.pop();
            }   
            if(!a.empty())
            {
                ans[i]=a.top()-i;
            }
            a.push(i);
        }
        
        return ans;
    }
};