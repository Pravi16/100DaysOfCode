#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head=NULL;
void insert(int data)
{
    node *temp=new node;
    temp->data=data;
    if(!head)
    {
        head=temp;
        return;
    }
    node *curr=head;
    while(curr->next)
    {
        curr=curr->next;
    }
    curr->next=temp;
    curr=temp;
}
void print()
{
    node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int compute()
{
    node *prev,*fast,*slow;
    prev=NULL;
    fast=slow=head;
    while(fast and fast->next)
    {
        fast=fast->next->next;
        node *temp=slow->next;
        slow->next=prev;
        prev=slow;
        slow=temp;
    }
    slow=fast?slow->next:slow;
    while(slow)
    {
        if(prev->data!=slow->data) return 0;
        slow=slow->next;
        prev=prev->next;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int data;
        cin>>data;
        insert(data);
    }
    print();
    cout<<compute()<<endl;
}