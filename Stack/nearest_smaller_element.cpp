vector<int> Solution::prevSmaller(vector<int> &A) {
    
    vector<int>ans;
    stack<int>t;
    t.push(0);
    ans.push_back(-1);
    for(int i=1;i<A.size();i++)
    {
        while(!t.empty() and A[t.top()] >= A[i])
        {
            t.pop();
        }
        if(t.empty())
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(A[t.top()]);
        }
        t.push(i);
        
    }
    return ans;
}
