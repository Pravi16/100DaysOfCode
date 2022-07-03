class Solution {
public:
    ListNode* deleteDuplicates(ListNode* A) {
        if(A==NULL) return NULL;
        
        ListNode *temp=A;
        while(temp->next!=nullptr)
        {
            if(temp->val==temp->next->val)
            {
                temp->next=temp->next->next;
            }
            else
            {
                temp=temp->next;
            }
        }
        return A;
        
    }
};