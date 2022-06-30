class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode*>st;
        ListNode *temp=head;
        while(temp)
        {
            st.push(temp);
            temp=temp->next;
        }
        int n=st.size()/2;
        temp=head;
        while(n--)
        {
            ListNode *cur=st.top();
            cur->next=temp->next;
            temp->next=cur;
            temp=cur->next;
            st.pop();
            
        }
        temp->next=NULL;
    }
};