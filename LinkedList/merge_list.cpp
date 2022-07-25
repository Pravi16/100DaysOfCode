class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *temp=new ListNode(-1);
        ListNode *ans=temp;
        while(l1 and l2)
        {
            if(l1->val < l2->val)
            {
                temp->next=new ListNode(l1->val);
                l1=l1->next;
            }
            else
            {
                temp->next=new ListNode(l2->val);
                l2=l2->next;
            }
            temp=temp->next;
        }
        while(l1)
        {
            temp->next=new ListNode(l1->val);
            l1=l1->next;
            temp=temp->next;
        }
        while(l2)
        {
            temp->next=new ListNode(l2->val);
            l2=l2->next;
            temp=temp->next;
        }
        return ans->next;
    }
};