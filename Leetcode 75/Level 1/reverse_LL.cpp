class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *nnext,*cur,*prev;
        prev=NULL;
        while(head)
        {
            nnext=head->next;
            head->next=prev;
            prev=head;
            head=nnext;
        }
        return prev;
    }
};