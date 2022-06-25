class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
        ListNode *temp=head;
        int cnt=0;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
            cnt++;
        }
        stack<int>st;
        vector<int>ans(cnt);
        for(int i=cnt-1;i>=0;i--)
        {
            while(!st.empty() and(st.top()<=v[i])) st.pop();
            ans[i]=st.empty()?0:st.top();
            st.push(v[i]);
        }
        return ans;
        
    }
};